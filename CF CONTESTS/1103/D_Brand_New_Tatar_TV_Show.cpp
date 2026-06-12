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
    int n, k;cin >>n>>k;
    vi cnt(n + 1, 0);
    rep(i,0,n){
        int x;cin >>x;
        cnt[x]++;
    }
    vi dp(n + 1, 0);
    int fc = 0;
    bool ok = false;
    revrep(v,n,1){
        if(v + 1 <= n && dp[v + 1]) fc++;
        if(v + k + 1 <= n && dp[v + k + 1]) fc--;
        if(cnt[v]){
            bool j = (fc > 0);
            bool w = false;
            if(j) w = true;
            else w = (cnt[v] % 2 == 0);
            if(w) ok = true;
            else dp[v] = 1;
        }
    }
    cout << (ok ? "YES" : "NO") << nl;
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
   a player will lose if he cant choose an y , such that x-y<=k

         makan supports egor and not dabir , 

         so if all the elements are same and the count is odd then dabir wins 

         eg 

         3  3 3 3 3 
         here 1st move is done by arseniy and the next 4 moves E , D , E , D 
         so last 3 is with dabir so dabir wins , here will the person loose even if they dont get a chance ?
          
         now in this eg  dabir won ?or its just egor didnt win ?

         4 1
          3 3 3 3
        so here we can see , if the count is even then egor wins else dabir win if all elements are saem 


        y-x shouls be less then or eq to k 
   
          what is makan chooses the max element at start? which would make x the largest eventually , but it may easily help to reduce 
          y-x<=k , , so shld we pic the min element? 

          actually as y-x shld be great or eq to 0 

          always our y must be more than x , so the game moves to equal or larger numbers after each step 

          a player will move to  a larger number say u , if mving to u leaves the next player in a loosing state 

           if all jumps will not help to opponent lose then the parity may apply ig?

           now makan must try to make egor win , how do we find which element must he chose?
            
           so we can try looking from the max to min element ? coz max elem would be the end in sorted array and no furthur moves can be done 

           since the max element has no bigger numbers to jump to, nobody can jump. 
           so the win/loss of the max element is  decided by parity ? just like our eg 1?
           
           once we know the max  ele  we can  step backwards to the next smaller element 'v'.
           from v chekc is there any element u in the range [v+1, v+k] that is a guaranteed losing state for the next guy?
           
           
           so makan just runs this from max to min. if any  existing element turns out to be a winning state, 
           he picks it on turn 1 and egor is guaranteed to win!
*
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