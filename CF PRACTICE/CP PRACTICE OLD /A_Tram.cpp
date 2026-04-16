<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cur = 0, best = 0;
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;   
        cur -= a;            
        cur += b;            
        best = max(best, cur);
    }
    cout << best << endl;
}
=======
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n , m; cin>>n>>m;
    while(n--)
}
>>>>>>> b9054e93db9d6de379b4b331ce29a691516046cc
