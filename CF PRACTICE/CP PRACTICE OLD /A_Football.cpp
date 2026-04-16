#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    unordered_map<string,int> freq;
    string team;
    while (n--) {
        cin >> team;
        freq[team]++;   
    }
    string winner;
    int maxi = 0;
    for (auto &p : freq) {
        if (p.second > maxi) {
            maxi = p.second;
            winner = p.first;
        }
    }
    cout << winner << endl;
    return 0;
}
