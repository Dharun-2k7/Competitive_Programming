#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int m = max((3*a)/10, a - (a/250)*c);
    int v = max((3*b)/10, b - (b/250)*d);
    cout << (m > v ? "Misha" : (v > m ? "Vasya" : "Tie"));
}/*observations
a-- points of misha (c - time when solved)
b-- points of vasya(d--time when solved)
formula to calc point change in cf
max(3p/10,p-p/250 * t)
*/