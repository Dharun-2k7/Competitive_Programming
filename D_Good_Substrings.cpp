#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main() {
    string s;  cin >> s;
    int n = s.size();
    string good; 
    cin >> good;

    int k; 
    cin >> k;

    vector<int> is_good(26);
    for (int i = 0; i < 26; i++) 
        is_good[i] = good[i] - '0';

    unordered_set<ull> st;   
    st.reserve(n * n);
    st.max_load_factor(0.7);

    const ull B = 1315423911ULL;
    for (int i = 0; i < n; i++) {
        int bad = 0;
        ull h = 0;
        for (int j = i; j < n; j++) {
            int c = s[j] - 'a';
            if (!is_good[c]) bad++;
            if (bad > k) break;

            h = h * B + (c + 1);st.insert(h);
        }
    }

    cout << st.size() << "\n";
}
