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
    int n,c;cin >>n>>c;
    vi a(n);
    rep(i,0,n) cin >> a[i];
    sort(all(a));
    int mx = n/2;
    int ans = 0;
    rep(i,0,n){
        if(i < mx && a[i] < c) continue;
        ans += a[i] - c;
    }
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

    rmeoving adjacent elements as adding the cost of max val ele 

    -- is it optimal to always do the 2nd operation coz anyways our max element cost will be added to the ans if we do op 1

       by doing that in op 2 we can take out another smaller element too

        no actually we need to maximise the score , so we must do operation 1 ? more than operation 2 ?

        wait actually lets look at the cost c that is subtracted every time , 

        if we do op 1 on element x , we get x - c added to our ans 

        what if x is very small ? like x < c ? 

        then x - c becomes neg and it decreases our score 

        so we dont wana  take small ele using op1

        this is where we shld use op2? 

        if we do op 2 on x and y (assuming x <= y) , we get y - c 

        so we can use op 2 to remove the bad elements (where x < c) for free 

        since op 2 removes 2 eles at a time , we can remove at most n/2 elements 

        so first the array must be sorted ...
        traverse through n/2 eles and if any is <c we can rmve it 

        and for remaining elements can we rmv them normaly and add the el-c

*/