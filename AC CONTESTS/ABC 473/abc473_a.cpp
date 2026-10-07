#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int>a(n);
    for(int &x:a) cin >> x;
    cout << accumulate(a.begin()+n/2,a.end(),0);
}

