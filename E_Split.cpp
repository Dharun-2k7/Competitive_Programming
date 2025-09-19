#include <bits/stdc++.h>
using namespace std; 
using ll = long long;
using ld = long double;
int main() {
	ios_base::sync_with_stdio(false); 
    cin.tie(0);
	int t; cin >> t;
	while(t--) {
		int n, k; cin >> n >> k;
		map<int, int> freq;
		vector<int> v(n);

		for(auto &x : v) {
			cin >> x;
			freq[x]++;
		}
 
		bool pos = true;
		for(auto &x : v) {
			if(freq[x] % k) pos = false;
		}
		if(!pos) {
			cout << "0"<<endl;
			continue;
		}
 
		map<int, int> mp;
		int r = -1;
		ll ans = 0;
		for(int l = 0; l < n; l++) {
			while(r < n-1) {
				if(mp[v[r+1]] < freq[v[r+1]]/k) {
					mp[v[r+1]]++;
					r++;
				}
				else break;
			}
 
			ans += (r - l + 1);
			mp[v[l]]--;
		}
 
		cout << ans << endl;
	}
 
	return 0;
}