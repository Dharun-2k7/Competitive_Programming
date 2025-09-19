#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>uniq(n);
    for(int i=0;i<n;i++) cin >> uniq[i];
    sort(uniq.begin(), uniq.end());
    int ans=1;
    for(int i=1;i<n;i++){
        ans+=(uniq[i]!=uniq[i-1]);
    }
    cout<<ans<<endl;
}