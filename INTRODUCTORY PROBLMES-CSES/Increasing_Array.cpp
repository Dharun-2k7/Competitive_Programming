#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define vll vector<long long>
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

int sieve(int n){
    vector<bool> is_prime(n+1, true);
    is_prime[0]=is_prime[1]=false;
    for(int i=2;i*i<=n;i++){
        if(is_prime[i]){
            for(int j=i*i;j<=n;j+=i){
                is_prime[j]=false;
            }
        }
    }
    int count=0;
    for(int i=2;i<=n;i++){
        if(is_prime[i]) count++;
    }
    return count;
}

void solve(){
    int n; cin >>n;
    vi arr(n);
    rep(i,0,n){
        cin >>arr[i];
    }
    ll count=0;
    rep(i,1,n){
        if(arr[i]<arr[i-1]){
            count+=arr[i-1]-arr[i];
            arr[i]=arr[i-1];
        }
    }
    cout <<count<<end;
}

int32_t main(){
    fast
    //int t;cin >>t;
    //while(t--){
        solve();
    //}
    return 0;
}