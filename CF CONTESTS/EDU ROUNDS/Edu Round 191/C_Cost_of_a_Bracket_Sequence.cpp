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
    int n,k; cin>>n>>k;
    string s;  cin>>s;
    int mn = 0;
    int split = 0;
    int pref = 0;

    rep(i,0,n){
        if(s[i] == '(') pref++;
        else pref--;
        if(pref < mn){
            mn = pref;
            split = i + 1;
        }
    }

    vi pos;

    rep(i,0,split) if(s[i] == '(') pos.pb(i);
    rep(i,split,n) if(s[i] == ')') pos.pb(i);
    
    string ans(n,'0');
    int rem = min(k,pos.size());
    rep(i,0,rem)ans[pos[i]] = '1';
    cout << ans << nl;
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
    longer the subsequence of regular bracker  sequence the more costier it is 
         

        a pair of brackets makes a bracket series regular ,  ( ) ,, (( ))

             we must reduce the number of pairs at most k number of time, 
               
                is it compulsory that we need to reduce k numbr of time or is it just atmost count 

                  do we need a dp to store , nah ig a mx variable enough for us to store the max value we got ? 

(())() -- 6 brackers with 3 pair 
", "() - 1 pair 
", and "(()(())) --  8 brackets and 4 pair 
" are regular, while ")( a pair exists but not in the current order so the 1st intuition was wrong  ? do we need to use prefix and suffix to keep track of the previous  ( and )
", "(()
", and "(()))(
" — are not.

so as even the pair maybe same  ( ) , )( both has pair 1 but 2nd one is wrong so we must use a prefix tracking ans 
    check the balance of previous brackets 

      lets keep  ( = +1 
           and   ) = -1
           
           track our running  balance
           
           where does balance become minimum ? lets keep that as our split point 

           can we split the string there ?


            all ( before that point can form pairs
            all ) after that point can form pairs
                
            collect their indices

            if we remove those brackets we destroy pair formations


           
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