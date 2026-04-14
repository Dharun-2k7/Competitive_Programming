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
    string s; cin >>s;
    int ans=0;
    int sm=0;
    for(char c:s)sm+=(c-'0');
    ans=sm;
    int n=s.size();
    rep(i,0,n){
        if(s[i]=='0')continue;
        int cur=0;

        rep(j,0,i) cur+=(s[j]-'0');
        cur+=(s[i]-'0'-1);
        cur+=9*(n-i-1);
        ans=max(ans,cur);
    }
    cout<<ans<<nl;

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
we need to find the max sum poss in the given range upto N 
   -- we need to maximise the total nos of 9 in the number 
     -- we can either choose the sum of digs of N if they give the max 

      eg tc : - 9995
                   here the og sum would be 32 
                   but we can change the num 5 without changing num of 9 in og num 
                       9989


                100 
                 to maximise this we make it to 99 
                     -- so if we cant increase the num we can go to the next nearby 10s place
                     take an ith position and reduce it by1 and then make everything behind it as 9 

                  3141592653589793 - 79 
                  3099999999999999 - 14 x9 = 126+3=129 

                  so its not some random ith pos 

                  2999999999999999 -15x9 =yeah so here we get 135+2=137

                  so do we have to reduce the left most index? but the 2nd tc would fail ?  is it the left most non 9 integer - no it works either way 
                  sum(9998)=sum(8999) 

   

            

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