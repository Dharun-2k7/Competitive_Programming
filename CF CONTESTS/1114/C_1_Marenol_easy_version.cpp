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
    int n;cin >> n;
    string a;cin >> a;
    string b;cin >> b;
    int ae = 0, ao = 0, be = 0, bo = 0;
    rep(i,0,n){
        if(a[i] == '1'){
            if(i % 2 == 0) ae++;
            else ao++;
        }
        if(b[i] == '1'){
            if(i % 2 == 0) be++;
            else bo++;
        }
    }
    if(ae == be && ao == bo) cout << "YES" << nl;
    else cout << "NO" << nl;
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
the count of 0s and 1s in the string should be equal , if not its not possible
that doesnt mean if counts are equal then its possible to make a eq b 

     checking the blocks doesnt work too coz after switching the block there myt be a new block  

         it just reversing the possible values 
          
        001→100 or 100→001
        and 
        011→110 or 110→011

        so our search space is not just the 3 block instead its the entire string 
        how do we check if its possible to make a eq to b ? 

        1st step there must be either 001 , 100 , 011, 110 in the string a , else its not possible to change the string a to b
*/