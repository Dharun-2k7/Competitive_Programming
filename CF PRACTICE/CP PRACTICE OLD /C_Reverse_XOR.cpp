#include <bits/stdc++.h>
using namespace std;
using ll=long long;
bool is_palindrome(long long n) {
    vector<int> bits;
    while(n) {
        bits.push_back(n & 1);
        n >>= 1;
    }
    int l = 0, r = bits.size() - 1;
    while(l < r) {
        if(bits[l] != bits[r]) return false;
        l++; r--;
    }
    if(bits.size() % 2 == 1 && bits[bits.size()/2] != 0) return false;
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        if(n == 0){
            cout << "YES"<<endl;
            continue;
        }
        if(n % 2 == 1){
            if(is_palindrome(n)) cout << "YES"<<endl;
            else cout << "NO"<<endl;
        } else {
            ll m = n;
            while(m % 2 == 0) m /= 2;
            if(is_palindrome(m)) cout << "YES"<<endl;
            else cout << "NO"<<endl;
        }
    }
}
