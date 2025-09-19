#include <iostream>
using namespace std;
int main() {
    string s;cin >>s ;
    if (s[2] == '8') { 
        s[0] += 1; 
        s[2] = '1';
    } else {
        s[2] += 1; 
    }
    cout << s << endl;
}