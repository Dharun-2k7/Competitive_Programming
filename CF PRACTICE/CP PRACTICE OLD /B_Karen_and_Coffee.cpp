<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
const int MAX_T = 200000;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> c(MAX_T + 2, 0);
    int temp_n = n;
    while(temp_n--) {
        int l, r;
        cin >> l >> r;
        c[l]++;
        c[r + 1]--;
    }
    for(int i = 1; i <= MAX_T; i++)
        c[i] += c[i - 1];
    for(int i = 1; i <= MAX_T; i++)
        c[i] = (c[i] >= k ? 1 : 0);
    for(int i = 1; i <= MAX_T; i++)
        c[i] += c[i - 1];

    int temp_q = q;
    while(temp_q--) {
        int a, b;
        cin >> a >> b;
        cout << c[b] - c[a - 1] << "\n";
    }
    return 0;
}
=======
#include<bits/stdc++.h>
using namespace std;
const int MAX_T = 200000;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> c(MAX_T + 2, 0);
    int temp_n = n;
    while(temp_n--) {
        int l, r;
        cin >> l >> r;
        c[l]++;
        c[r + 1]--;
    }
    for(int i = 1; i <= MAX_T; i++)
        c[i] += c[i - 1];
    for(int i = 1; i <= MAX_T; i++)
        c[i] = (c[i] >= k ? 1 : 0);
    for(int i = 1; i <= MAX_T; i++)
        c[i] += c[i - 1];

    int temp_q = q;
    while(temp_q--) {
        int a, b;
        cin >> a >> b;
        cout << c[b] - c[a - 1] << "\n";
    }
    return 0;
}
>>>>>>> b9054e93db9d6de379b4b331ce29a691516046cc
