#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        string s; cin >>s;
        int res = 1;
	bool ex = false;
	for (int i = 0; i + 1 < (int)(s.size()); i++) {
		res += (s[i] != s[i + 1]);
		ex |= (s[i] == '0' && s[i + 1] == '1');
	}
	cout << res - ex << endl;
    }
}