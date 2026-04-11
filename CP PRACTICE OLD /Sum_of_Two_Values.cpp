<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
 int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int  n,x;
    cin >> n >> x;
    map<int, int> mp;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if(mp.count(x-a)){
            cout<<i+1<<" "<<mp[x-a]+1<<endl;
            return 0;
        }
        mp[a] = i;
    }
    cout << "IMPOSSIBLE" << endl;
=======
#include <bits/stdc++.h>
using namespace std;
 int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int  n,x;
    cin >> n >> x;
    map<int, int> mp;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if(mp.count(x-a)){
            cout<<i+1<<" "<<mp[x-a]+1<<endl;
            return 0;
        }
        mp[a] = i;
    }
    cout << "IMPOSSIBLE" << endl;
>>>>>>> b9054e93db9d6de379b4b331ce29a691516046cc
 }