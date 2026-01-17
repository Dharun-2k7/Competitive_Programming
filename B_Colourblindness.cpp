#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s, t2; cin >> s >> t2;
        bool ok = true;
        for(int i = 0; i < n; i++){
            if(s[i] == 'R'){
                if(t2[i] != 'R'){
                    ok = false;
                    break;
                }
            } else {
                if(t2[i] == 'R'){
                    ok = false;
                    break;
                }
            }
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
}
