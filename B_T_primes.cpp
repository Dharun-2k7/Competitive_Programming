#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; 
    cin >> n;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    int MAX = 1e6+1;
    vector<bool> prime(MAX, true);
    prime[0] = prime[1] = false;
    for(int i=2;i*i<MAX;i++){
        if(prime[i]){
            for(int j=i*i;j<MAX;j+=i) prime[j]=false;
        }
    }
    vector<ll> tprimes;
    for(int i=2;i<MAX;i++){
        if(prime[i]) tprimes.push_back(1LL*i*i);
    }
    for(int i=0;i<n;i++){
        ll x = a[i];
        int lo = 0, hi = tprimes.size()-1;
        bool found = false;
        while(lo <= hi){
            int mid = (lo+hi)/2;
            if(tprimes[mid] == x){
                found = true;
                break;
            } else if(tprimes[mid] < x) lo = mid+1;
            else hi = mid-1;
        }
        if(found) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
