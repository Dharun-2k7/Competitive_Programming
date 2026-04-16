#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    const int nmax = 100000;
    static double h[nmax + 1];
    for(int i = 1; i <= nmax; i++){
        h[i] = h[i-1] + 1.0 / i;
    }

    int t; 
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << fixed << setprecision(5) << h[n] << "\n";
    }
}
