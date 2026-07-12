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
#define N 1000010

int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

int lcm (int a, int b) {
return a / gcd(a, b) * b;
}

int lp[N], expo[N], prim[N];
void pre(){
    rep(i,2,N){
        if(lp[i]==0){
            for(int j=i;j<N;j+=i){
                lp[j]=1;
                prim[j]++;
                int x=j;
                while(x%i==0){
                    expo[j]++;
                    x/=i;
                }
            }
        }
    }
}

void solve(){
    int n;cin >>n;
    cout<<expo[n]+prim[n]-1<<nl;
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
    pre();
    test();
    //solve();
    return 0;
}
/*
  we need to check the divisors of n in the range [2,N]
      and we partition them into multiple layers 
        
           a layer is good if it follows certain 2 conditions , 

            whats our lower boud here? 
              
              a div chain to N is lower bound 

              so, if n = (e1, e2, e3.....)
 
    whats the LDC that we  can get?
        
            So, sum of exponents is a lowerbound?
 
            coz.
            
            can we have a divisor chain by reucing it by 1 , some exponent.
 
            so sum of exponents is the answer -1. is a guess.
 
    none if them in the same layer divide each other..
    --> so if u compare 2. they have a prime thats not in each other..
 
    so.. if each prime is present >= 2 times?
 
    among layers exponent can only drop by 1..
 
    lets have a prime help everyone.. --> which will be present and never decrease..
 
            so the answer = exponent till here  + exponent + 1 is always possible..
 
            now the question is , when does exponent - 1 is possible,
 
            exponent 
 
    Sum of exponet is always possible..
 
    now.. the question is for exponent - 1..
 
         we  know the layers.. and for eadch layer we have to see if theres an oderin.
 
            the layers will get fixed, because of (exponent sum);
        
        Okay, now if u have a series of exponents and primes..
 
        we have to answer is there a line possible in here..
 
        look at the last but one.. all the prime factors also should be alone..
 
        so maybe the answer = .
            sum of exponents = 2, has their order.
 
            but when sum of exponents = 1..
                u have p1 p2 p3... pk
 
                all of them will take.. a new thing..
 
                so as long as sum of exponent = 2..
                it comes down..
 
                p1p2 p2p1...
 
                sum, sum -1... 2, number of primes..


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