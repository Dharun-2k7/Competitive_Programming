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
/*
so we must a pref approach here
     a subarray sum becomes zero when:
         pref[r]-pref[l-1] = 0
    
        pref[r]=pref[l-1]
        so zero subarray sum exists iff some pref sm val repeasts
        so we must make sure no prefix sum valu eappears twice 

        so we can traverse left to rigth and stroe a curr pref va
        & a set to store prev vals so we can stop when we get a rep val

        so when a val repeats we can insert a nmber there to break the rep val and inc ans+=1
        

*/
void solve(){
    int n; cin >>n;
    vi a(n); 
    rep(i,0,n) cin >>a[i];

    set<int>s;
    s.insert(0);

    int pref=0; int ans=0;
    rep(i,0,n){
        pref+=a[i];
        if(s.count(pref)){
            ans++;
s.clear();
s.insert(0);
pref=a[i];
        }
        s.insert(pref);
    }
    cout<<ans<<end;
    
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
    //test();
    solve();
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