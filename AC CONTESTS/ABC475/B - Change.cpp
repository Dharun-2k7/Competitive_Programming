#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;cin>>n;
    int a=0,b=0,c=0;
    while (n--) {
        int x;cin >>x;
        int y = ((x + 999) / 1000) * 1000 - x;
        c += y / 100;
        y %= 100;
        b += y / 10;
        y %= 10;
        a += y;
    }
    cout << a << " " << b << " " << c << endl;
}