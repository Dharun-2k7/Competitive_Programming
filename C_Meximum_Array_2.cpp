#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;  cin >> t;
    while(t--){
        int n,k,q;
        cin >> n >> k >> q;

        vector<pair<int,int>> mn, mx;
        mn.reserve(q);
        mx.reserve(q);

        for(int i=0;i<q;i++){
            int c,l,r;
            cin >> c >> l >> r;
            l--, r--;
            (c==1 ? mn : mx).emplace_back(l,r);
        }

        vector<bool> im(n,false), ix(n,false);
        for(auto &p:mn) for(int i=p.first;i<=p.second;i++) im[i]=true;
        for(auto &p:mx) for(int i=p.first;i<=p.second;i++) ix[i]=true;

        vector<int> a(n, k+1);

        for(auto &p:mn){
            int L=p.first, R=p.second, pos=-1;
            for(int i=L;i<=R;i++){
                if(!ix[i]){ pos=i; break; }
            }
            if(pos==-1) pos=L;
            a[pos]=k;
        }

        for(auto &p:mx){
            int L=p.first, R=p.second;
            vector<bool> hv(k,false);
            for(int i=L;i<=R;i++)
                if(a[i]>=0 && a[i]<k) hv[a[i]]=true;

            vector<int> miss;
            for(int v=0; v<k; v++) if(!hv[v]) miss.push_back(v);

            int avail=0;
            for(int i=L;i<=R;i++) if(!im[i] && a[i]>k) avail++;

            if((int)miss.size() > avail){
                cout << -1 << '\n';
                return 0;
            }

            int idx=0;
            for(int i=L;i<=R && idx<(int)miss.size(); i++){
                if(!im[i] && a[i]>k){
                    a[i]=miss[idx++];
                }
            }
        }

        for(int i=0;i<n;i++)
            cout << a[i] << (i+1<n?' ':'\n');
    }
    return 0;
}
