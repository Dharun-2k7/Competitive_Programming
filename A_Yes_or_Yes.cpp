#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; cin >>t;
    while(t--){
        string s; cin >>s;
        int y = 0;
        for (char c : s) {
            if (c == 'Y') y++;
        }

        if (y <= 1) cout << "YES\n";
        else cout << "NO\n";
    }
    
}