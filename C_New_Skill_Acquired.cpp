#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;cin>>n;
    vector<pair<int,int>> ab(n+1);
    vector<int> cnt(n+1,0);
    vector<vector<int>> g(n+1);
    vector<bool> vis(n+1,false);
    queue<int> q;
    for(int i=1;i<=n;i++){
        int a,b;cin>>a>>b;
        ab[i]={a,b};
        if(a==0 && b==0){vis[i]=1;q.push(i);}
        else{
            g[a].push_back(i);
            g[b].push_back(i);
            cnt[i]=2; 
        }
    }
    int ans=0;
    while(!q.empty()){
        int u=q.front();q.pop();
        ans++;
        for(int v:g[u]){
            if(--cnt[v]==1 && !vis[v]){vis[v]=1;q.push(v);}
        }
    }

    cout<<ans<<endl;
}
