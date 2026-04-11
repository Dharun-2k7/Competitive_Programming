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

    int lcm = 1;

    rep(i,0,n){
        int a; 
        cin >> a;

        if(lcm > k) continue;
        if(a == 0 || a == 1) continue;

        int g = gcd(lcm, a);
        int x = a / g;

        if(lcm > k / x){
            lcm = k + 1;
        } else {
            lcm *= x;
        }
    }
    cout << (lcm > k ? -1 : lcm % 1000000007) << endl;
}

int32_t main(){
    fast
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
/*
obs:

we need to increase every element in the array by 1 for k num of times until it turns to be 0 simultaneously
 so we mst find lcm of the elements in array 
   
  if the lcm of these are greater than k then the machine sgatters 
    else then  lcm of all num is the ans 

    eg :

      3 100
      2 3 4   op = 12

      3 10 
      2 3 5  -- op =-1 lcm > 10

      4 200 
      4 6 8 10  -- lcm 120 

*/