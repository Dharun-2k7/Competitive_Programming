#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; cin >>t;
    while(t--){
        int a,b,c;
        cin >>a >> b >> c;
        int da ,db=0;
        da=abs(1-a);
        db=abs(b-c)+abs(1-c);
        cout << (da < db ? 1 : (da > db ? 2 : 3)) << endl;
    }
}
