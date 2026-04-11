#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t; cin >> t;
    while(t--){
        ll n,k,q;
        cin >> n >> k >> q;

        vector<pair<ll,ll>> mn, mx;
        for(ll i=0;i<q;i++){
            ll c,l,r;
            cin >> c >> l >> r;
            l--, r--;
            if(c==1) mn.push_back({l,r});
            else     mx.push_back({l,r});
        }

        vector<ll> a(n,k+1);

        for(auto &p:mn){
            ll L=p.first,R=p.second,pos=-1;
            for(ll i=L;i<=R;i++){
                if(a[i]!=k){ pos=i; break; }
            }
            if(pos==-1) pos=L;
            a[pos]=k;
         } 
         for(auto &p:mx){
            ll L=p.first,R=p.second;
            vector<bool> hv(k,false);
            for(ll i=L;i<=R;i++){
                if(a[i]<k) hv[a[i]] = true;
            }

            ll val=0;
            for(ll i=L;i<=R;i++){
                if(a[i]>k){
                    while(val<k && hv[val]) val++;
                    if(val==k) break;
                    a[i]=val;
                    hv[val]=true;
                }
            }
        }

        for(ll i=0;i<n;i++)
            cout << a[i] << (i+1<n?' ':'\n');
    }
    return 0;
}
