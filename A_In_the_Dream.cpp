<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int a,b,c,d; 
        cin >> a >> b >> c >> d;
        cout << ((max(a,b) <= 2*(min(a,b)+1) && max(c-a,d-b) <= 2*(min(c-a,d-b)+1))? "YES\n" : "NO\n");
    }
}
=======
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int a,b,c,d; 
        cin >> a >> b >> c >> d;
        cout << ((max(a,b) <= 2*(min(a,b)+1) && max(c-a,d-b) <= 2*(min(c-a,d-b)+1))? "YES\n" : "NO\n");
    }
}
>>>>>>> b9054e93db9d6de379b4b331ce29a691516046cc
