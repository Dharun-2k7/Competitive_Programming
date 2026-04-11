#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vi a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        vi freq(102,0);
        for(int x : a) freq[x]++;
        for(int i=0;i<102;i++){
            if(freq[i]==0){
                cout << i <<endl;
                break;
            }
        }
    }
}
