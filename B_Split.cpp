#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>a(2*n);
        for(int &i:a) cin>>i;

        unordered_map<int,int> cnt;
        for(int x:a) cnt[x]++;

        int m1=0, m2=0;
        for(auto &p: cnt){
            if(p.second % 2 == 1) m1++;
            else m2++;
        }

        int x = min(m2, n);
        if( (x % 2) != (n % 2) && m1 == 0 ) x--;
        if(x < 0) x = 0;

        int ans = m1 + 2*x;
        cout << ans << "\n";
    }
    return 0;
}


/*

if any numbers count is odd we cannot seperate them coz it always gives us a even 
no in last tc we can split as 5,1 

in last test case --- 4 -- 9's and 6 - 7's ans =2 
tc 6-->  4--1s and 4 2s -- split as [2,2,2,1] and [1,1,1,2]
*/