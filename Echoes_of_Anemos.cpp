#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
int main(){
    int n; cin>>n;
    vi h(n);
    for(int i=0;i<n;i++){
        string s; cin>>s;
        int m=s.size();
        vi pi(m,0);
        for(int j=1;j<m;j++){
            int k=pi[j-1];
            while(k>0 && s[j]!=s[k]) k=pi[k-1];
            if(s[j]==s[k]) k++;
            pi[j]=k;
        }
        int c=0, k = (m? pi[m-1] : 0);
        while(k>0){ c++; k=pi[k-1]; }
        h[i]=c;
    }

    vector<ll> l(n), r(n);
    stack<int> st;
    for(int i=0;i<n;i++){
        while(!st.empty() && h[st.top()]<=h[i]) st.pop();
        l[i] = st.empty() ? i+1 : i - st.top();
        st.push(i);
    }
    while(!st.empty()) st.pop();
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && h[st.top()]<=h[i]) st.pop();
        r[i] = st.empty() ? n - i : st.top() - i;
        st.push(i);
    }
    ll ans=0;
    for(int i=0;i<n;i++) ans += l[i]*r[i];
    cout<<ans<<"\n";
    return 0;
}
