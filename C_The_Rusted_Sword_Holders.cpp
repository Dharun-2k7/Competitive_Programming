#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    int k; cin >> k;
    int n = s.size();
    
    vector<int> rust(n, 0); 
    for(int i = 0; i < n; i++) {
        if(s[i] == 'R') {       
            int l = max(0, i - k);
            int r = min(n - 1, i + k);
            rust[l] += 1;       
            if(r + 1 < n) rust[r + 1] -= 1;
        }
    }
    for(int i = 1; i < n; i++) rust[i] += rust[i - 1];
    string res = s;
    for(int i = 0; i < n; i++) {
        if(rust[i] > 0) res[i] = 'R';
    }
    
    int ans = 0;
    for(int i = 0; i < n; i++) {
        if(res[i] == 'G') {
            ans++;   
            i++;     
        }
    }
    cout << ans << endl;
}

/*
just changing the i+1 and i-1 index may nto work as we need to change it k time of days
the rusted one can rust its adjacent sword hodlers hmm?
so we need to simulate the rusting 
so with eg tc we can see
Initial:  G G R G G G G R
k = 1
Day 1:    G R R R G G R R
the adjacent sides are rusted
so now we need to know which all are G to place sword
we can use a greedy approach to place the swords

*/