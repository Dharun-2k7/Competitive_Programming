<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    string s; cin>> s;
    if(n>=3 && s.substr(n-3,3)=="tea"){
        cout << "Yes";   
    }
    else{
        cout << "No";
    }
    return 0;
=======
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    string s; cin>> s;
    if(n>=3 && s.substr(n-3,3)=="tea"){
        cout << "Yes";   
    }
    else{
        cout << "No";
    }
    return 0;
>>>>>>> b9054e93db9d6de379b4b331ce29a691516046cc
}