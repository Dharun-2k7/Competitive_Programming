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

int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

int lcm (int a, int b) {
return a / gcd(a, b) * b;
}

void solve(){
    int n; cin >>n;
    vi b(n);
    map<int,int>cnt,res;
    vi a;
    rep(i,0,n){
        cin >>b[i];
        cnt[b[i]]++;
    }
    a=b;
    sort(all(a));
    a.erase(unique(all(a)),a.end());

    if(a[0]!=0){
        cout<<"-1"<<nl;
        return;
    }

    if(a.size()==1){
        rep(i,0,n) cout <<"1"<<" ";
        cout<<nl;
        return;
    }
    
    bool ok =true;
    rep(i,1,a.size()){
        ok &=(a[i]-a[i-1])%cnt[a[i-1]]==0;
        res[a[i-1]]=(a[i]-a[i-1])/cnt[a[i-1]];
    }
    res[a[a.size() - 1]] = res[a[a.size() - 2]] + 1;
    for (auto i = 1; i < a.size(); i++) ok &= res[a[i]] > res[a[i - 1]];
    
    if(!ok){
        cout<<"-1"<<nl;
        return;
    }
    else{
        rep(i,0,n){
            cout<<res[b[i]]<<" ";
        }
        cout<<nl;
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
░░░░░░░░░░   ░░░░ ░░░░░  ░░░░░░░░ ░░░░░       ░░░░░░░░ ░░░░ ░░░░░

 Author: Dharun
*/


/*
    if alll the elements in the array b are 0 then - all the elements in array are the same , so we can return any arbitrary number 

     0 in the array is the smallest element in array a , 

     but we cant assign it randomly coz the higher num values depends on the sm


*/