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
/*obs 

the gh is at branch X , can jump to multiples of X

      so any branch in the range [2..p] which is mul of X is unsafe (x/b)

      so a safe branch much have no divisor in the range [2..p] which is mul of X

      so the smallst div of B mst b grater than p
         
          so b might be a prime and b > p
          so b i sunsafe it has divisor , can check div upto min(p,sqrt(b))

*/

bool safe(int b, int p){
    for(int d=2;d*d<=b&&d<=p;d++){
        if(b%d==0) return false;
    }
    return true;
}
void solve(){
    int p,y; cin >>p>>y;
    revrep(b,y,p+1){
        if(safe(b,p)){
            cout <<b<<end;
            return;
        }
    }
    cout <<-1<<end;
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