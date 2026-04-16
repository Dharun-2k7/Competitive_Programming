#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, y, z;
    cin >> x >> y >> z;
    int num = x - z * y;
    int den = z - 1;
    if(den != 0 && num % den == 0 && num / den >= 0) cout << "Yes";
    else cout << "No";

}
