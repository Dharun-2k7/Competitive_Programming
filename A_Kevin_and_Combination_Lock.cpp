#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >>t;
    while(t--) {
        int n; cin >> n;
        cout << (n%33==0? "YES" : "NO") << endl;
    }
}
/*
there is a combination lock with integer x;
we can perform 2 operations 
of x!=33 we can select 2 consecutive digits 3 from x 
if x>=33 we can change x to x-33
x<33 is not needed as when x=33 it gives 0 (x-33)
from test case we can identify that we can reduce numbers by 33 ( if we have consecuive 3 in it then remove them both)
will brute force work here?
we will be reducing it by 33 anyways? so can we check using mod ?
*/