#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    cin >> t;
    while(t--) {
        int n; 
        cin >> n;
        vector<long long> g(n);
        for(int i = 0; i < n; i++) cin >> g[i];

        sort(g.begin(), g.end(), greater<long long>());

        long long total = 0;
        while(g.size() > 1) {
            long long first = g[0];
            long long second = g[1];

            total += max(first, second);
            long long decrease = min(first, second);
            g[0] -= decrease;
            g[1] -= decrease;
            if(g[0] == 0) g.erase(g.begin());
            if(g[0] > 0 && g[1] == 0) g.erase(g.begin() + 1);
            sort(g.begin(), g.end(), greater<long long>());
        }
        cout << total << endl;
    }
}

/* obs

grumpiness decreases --min(i,j) : so we can choose the large and 2nd large value to reduce the grumpiness 
but to make all as frnd we need to repeat this task - direct mutual frndship as well as less grumpiness among villagers
we need to decrease each element with the min(i,j) of each pair
but can we take random pair? or any other way is there?
or shld we continue until i and j turns out to be 0 ?
or only connecting them matters? ( min(i,j) is just smth to confuse us?)
sortng helps to pick two large remining temrs
we can use 
*/