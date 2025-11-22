#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int m;
        cin >> m;

        vector<vector<int>> days(m);
        vector<int> lastpos(50000 + 777, -1);

        for(int day = 0; day < m; day++){
            int n;
            cin >> n;
            days[day].resize(n);

            for(int &x : days[day]){
                cin >> x;
                lastpos[x] = day;   
             }
        }

        vector<int> ans(m, -1);
        bool ok = true;

        for(int day = 0; day < m; day++){
            for(int x : days[day]){
                if(lastpos[x] == day){
                    ans[day] = x;
                    break;
                }
            }
            if(ans[day] == -1){
                ok = false;
                break;
            }
        }

        if(!ok){
            cout << -1 << "\n";
        } else {
            for(int i = 0; i < m; i++){
                cout << ans[i] << (i+1 < m ? ' ' : '\n');
            }
        }
    }
}
