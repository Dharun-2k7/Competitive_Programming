#include<bits/stdc++.h>
using namespace std;

#define int long long
#define db double
#define ull unsigned long long
#define vi vector<int>
#define vll vector<long long>
#define vvi vector<vi>
#define vvll vector<vll>
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define pll pair<long long,long long>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
#define rep(i,a,b) for(int i=a;i<b;i++)
#define revrep(i,a,b) for(int i=a;i>=b;i--)
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define nl "\n"

int p2[19];
int p5[19];


int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

int lcm(int a, int b){
    return a / gcd(a, b) * b;
}

void solve(){    
	int n,m;cin >>n>>m;
	int f2=0;
	int f5=0;

	int temp=n;
	while(temp%2==0){
		f2++;
		temp/=2;
	}

	temp=n;
	while(temp%5==0){
		f5++;
		temp/=5;
	}
	
	revrep(trl,18,0){
		int mul2 = max(0LL, trl- f2); 
		int mul5 = max(0LL, trl- f5);

		int nd=p2[mul2]*p5[mul5];
		if(nd<=m){
			int k = m-m%nd;
			cout << 1LL*k*n<<nl;
			return;
		}
	}

}

void test(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}

int32_t main(){
	fast
	p2[0]=1;
	p5[0]=1;
    rep(i,1,19) {
    	p2[i] = 2*p2[i-1];
		p5[i] = 5*p5[i-1];
	}

    test();
    //solve();
    return 0;
}

/*
 ██████████   █████
░░███░░░░███ ░░███
 ░███   ░░███ ░███████    ██████   ████████  █████ ████ ████████
 ░███    ░███ ░███░░███  ░░░░░███ ░░███░░███░░███ ░███ ░░███░░███
 ░███    ░███ ░███ ░███   ███████  ░███ ░░░  ░███ ░███  ░███ ░███
 ░███    ███  ░███ ░███  ███░░███  ░███      ░███ ░███  ░███ ░███
 ██████████   ████ █████░░████████ █████     ░░████████ ████ █████
░░░░░░░░░░   ░░░░ ░░░░░  ░░░░░░░░ ░░░░░░░░   ░░░░░░░░ ░░░░ ░░░░░

 Author: Dharun
*/