#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int>a(n), b(n);
        for(int &x : a) cin >> x;
        for(int &x : b) cin >> x;

        int ax = 0, bx = 0; 
        for(int i = 0; i < n; i++){
            int ai = a[i], bi = b[i];
            if((i+1) & 1){
                int A = ai | bi;   
                int B = ai & bi;   
                ax ^= A;
                bx ^= B;
            } else {
                int B = ai | bi;
                int A = ai & bi;   
                ax ^= A;
                bx ^= B;
            }
        }
        cout << (ax > bx ? "Ajisai" : (bx > ax ? "Mai" : "Tie")) << "\n";
    }
}
