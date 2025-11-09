#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin >> t;
    while(t--){
        int n;cin >> n;
        if(n == 2){
            cout << -1 << endl;
            continue;
        }
 
        if(n == 3){
            cout << "1 3" <<endl <<"2 3"<<endl;
            continue;
        }
 
        if(n == 4){
            cout << "1 2"<<endl<<"3 1"<<endl<<"4 1"<<endl;
            continue;
        }
 
        cout << "1 2"<<endl;
        cout << "2 3"<<endl;
        cout << "3 4"<<endl;
 
        cout << "1 " << n << endl;
 
        for(int i = 5; i < n; i++) cout << 2 << ' ' << i << endl;
    }
}