#include<bits/stdc++.h>
using namespace std;
#define MOD 676767677

int main(){
    int t; cin >>t;
    while(t--){
        int n;cin >>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin >>a[i];

          
    }
}
/*
1 3 2 

|1 |3 |2  

if there is only 1 input the answer is always 2 .. as ith position can view ith positon no matter where the cape is so cape can be on left or right -- 2 ways

acc to test cases the ans might be either 2 or 1 or 0 
at wat conditions do they turn out 0 or 1 

-- 3
2 2 2 

even for this test case we get 2 
so that doesnt mean 2 is only for single value inputs or is it because all values are same 

2| 2| |2 -- 1st poss
|2 |2 |2 -- 2nd poss


*/