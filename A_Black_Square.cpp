#include <bits/stdc++.h>
using namespace std;

int main() {
    int p,q,x,y;
    cin>>p>>q;
    cin>>x>>y;

    cout << ((p<=x && x<=p+99 && q<=y && y<=q+99) ? "Yes" : "No");
}
