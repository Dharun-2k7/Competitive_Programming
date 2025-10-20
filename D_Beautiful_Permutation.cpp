#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll query(int type, int l, int r) {
    cout << type << " " << l << " " << r << endl;
    cout.flush();
    ll resp;
    cin >> resp;
    return resp;
}

void solve() {
    int n;
    cin >> n;

    ll total_p = query(1, 1, n);
    ll total_a = query(2, 1, n);
    ll len = total_a - total_p; // r - l + 1

    int lo = 1, hi = n;
    while (lo < hi) {
        int mid = (lo + hi) / 2;
        ll sum_p = query(1, 1, mid);
        ll sum_a = query(2, 1, mid);
        if (sum_a - sum_p > 0)
            hi = mid;
        else
            lo = mid + 1;
    }
    int l = lo;
    int r = l + (int)len - 1;

    cout << "! " << l << " " << r << endl;
    cout.flush();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
/*
interactive problem sample 
#include <bits/stdc++.h>
using std::cin, std::cout, std::cerr, std::endl;
 
int query(std::vector<int> s) {
	cout << "? " << s.size() << ' ';
	std::sort(s.begin(), s.end());
	for (int u : s) cout << u << ' ';
	cout << '\n';
	int x; cin >> x; return x;
} 
void solve() {
	int n; cin >> n; int m = 2 * n;
	std::vector<int> ans(m + 1), s, t;
	for (int i = 1; i <= m; ++i) {
		s.push_back(i);
		int r = query(s);
		if (r > 0) 
			ans[i] = r, s.pop_back(), t.push_back(i);
	}
	for (int i = 1; i <= m; ++i) if (ans[i] == 0) 
		t.push_back(i), ans[i] = query(t), t.pop_back();
	cout << "! ";
	for (int i = 1; i <= m; ++i) 
		cout << ans[i] << " \n"[i == m];
}
int main() { int t; cin >> t; while (t--) solve(); return 0; }


*/