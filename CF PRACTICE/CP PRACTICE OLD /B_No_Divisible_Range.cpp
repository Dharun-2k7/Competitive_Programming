#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin >> t;
    vector<int> a(t);
    for(int &i : a) cin >> i;

    int ans = 0;

    for(int l = 0; l < t; l++){
        int sum = 0;
        for(int r = l; r < t; r++){
            sum += a[r];

            bool ok = true;
            for(int i = l; i <= r; i++){
                if(sum % a[i] == 0){
                    ok = false;
                    break;
                }
            }

            if(ok) ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
