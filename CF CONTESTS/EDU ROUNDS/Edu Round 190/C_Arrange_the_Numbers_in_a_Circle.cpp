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

void solve(){
    int n;cin >> n;
    int s = 0,tot = 0,cap = 0,m = 0, lt= 0;
    rep(i,0,n){
        int x;cin >> x;
        if(x == 1) s++;
        else{
            m++;
            tot += x;
            cap += (x - 2) / 2;
            lt= x;
        }
    }
    if(m == 0) cout << 0 << nl;
    else if(m == 1){
        int ans = lt+ min(s, lt/ 2);
        if(ans < 3) ans = 0;
        cout << ans << nl;
    }
    else{
        int ans = tot + min(s, cap);
        cout << ans << nl;
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

   in every triple of consecutive cards, there are at least two equal cards. 

      1 1 0 0 2 2 

      i think we must never take a single card as we wont be able to make 2 eq cards , maybe we can sneak in it between two equal sides 
           1 1 0 1 1 

      should we only take cards in pairs if the size is more then 6? 

         so any triple with all 3 being diff is wrong 
          
         so , any card with count more than 2 is safe to pick

    we can pick every card with more than 2 cards 
     and then greedily fill single elements in middle


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