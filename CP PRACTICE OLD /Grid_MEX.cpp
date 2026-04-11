<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout << ( (i - j + 1 + n) % n ) << " ";
            }
            cout << "\n";
        }
    }
}
=======
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout << ( (i - j + 1 + n) % n ) << " ";
            }
            cout << "\n";
        }
    }
}
>>>>>>> b9054e93db9d6de379b4b331ce29a691516046cc
