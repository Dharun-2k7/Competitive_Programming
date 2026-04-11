#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
const int INF = 1e9;

int main() {
    int n; cin >> n;

    vector<vi> brick(n, vi(n, -1));
    vector<char> color;
    int ind = 0;

    for (int row = 0; row < n; row++) {
        string s;
        cin >> s;
        int c = 0;
        for (int i = 0; i < (int)s.size(); ) {
            int num = 0;
            while (i < (int)s.size() && isdigit(s[i])) num = num * 10 + (s[i++] - '0');
            if (i >= (int)s.size()) break; 
            char ch = s[i++];
            int id = ind++;
            color.push_back(ch);
            for (int k = 0; k < num; k++) brick[row][c++] = id;
        }
    }

    vector<vi> adj(ind);
    int dr[] = {-1, 1, 0, 0};
    int dc[] = {0, 0, -1, 1};
    for (int i = 0; i < n; i++) {
        for (int c = 0; c < n; c++) {
            int u = brick[i][c];
            for (int k = 0; k < 4; k++) {
                int ni = i + dr[k], nc = c + dc[k];
                if (ni < 0 || ni >= n || nc < 0 || nc >= n) continue;
                int v = brick[ni][nc];
                if (u != v) adj[u].push_back(v);
            }
        }
    }

    vi starts, deserts;
    for (int i = 0; i < ind; i++) {
        if (color[i] == 'S') starts.push_back(i);
        if (color[i] == 'D') deserts.push_back(i);
    }

    // Dijkstra algo for short path
    vi dist(ind, INF);
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    for (int s : starts) {
        dist[s] = 0;
        pq.push(make_pair(0, s));
    }

    int ans = INF;
    while (!pq.empty()) {
        pair<int,int> p = pq.top(); pq.pop();
        int d = p.first;
        int u = p.second;

        if (d != dist[u]) continue;
        if (color[u] == 'D') { ans = d; break; }
        for (int v : adj[u]) {
            if (color[v] == 'R') continue;
            int w = (color[v] == 'G' ? 1 : 0);
            if (dist[v] > d + w) {
                dist[v] = d + w;
                pq.push(make_pair(dist[v], v));
            }
        }
    }

    cout << (ans == INF ? -1 : ans) << endl;
    return 0;
}
