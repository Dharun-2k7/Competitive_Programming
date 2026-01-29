#include<bits/stdc++.h>
using namespace std;

#define int long long
#define ull unsigned long long
#define vi vector<int>
#define vll vector<long long>
#define vvi vector<vi>
#define vvll vector<vll>
#define pii pair<int,int>
#define pll pair<long long,long long>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
#define rep(i,a,b) for(int i=a;i<b;i++)
#define revrep(i,a,b) for(int i=a;i>=b;i--)
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define end "\n"

int gcd(int a,int b){
	if(b==0) return a;
	return gcd(b,a%b);
}

void solve(){
	int n, k;
	cin >> n >> k;

	int n1 = n - (k - 1);
	if(n1 > 0 && n1 % 2 == 1){
		cout << "YES" << end;
		rep(i,0,k-1) cout << 1 << " ";
		cout << n1 << end;
		return;
	}

	int n2 = n - 2 * (k - 1);
	if(n2 > 0 && n2 % 2 == 0){
		cout << "YES" << end;
		rep(i,0,k-1) cout << 2 << " ";
		cout << n2 << end;
		return;
	}

	cout << "NO" << end;
}

int32_t main(){
	fast
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}

/*
 Author: Dharun
*/


/*
 ██████████   █████                                              
░░███░░░░███ ░░███                                               
 ░███   ░░███ ░███████    ██████   ████████  █████ ████ ████████ 
 ░███    ░███ ░███░░███  ░░░░░███ ░░███░░███░░███ ░███ ░░███░░███
 ░███    ░███ ░███ ░███   ███████  ░███ ░░░  ░███ ░███  ░███ ░███
 ░███    ███  ░███ ░███  ███░░███  ░███      ░███ ░███  ░███ ░███
 ██████████   ████ █████░░████████ █████     ░░████████ ████ █████
░░░░░░░░░░   ░░░░ ░░░░░  ░░░░░░░░ ░░░░░       ░░░░░░░░ ░░░░ ░░░░░

 Author: Dharun
*/