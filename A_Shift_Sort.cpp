#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        string t = s; 
        sort(t.begin(), t.end());
        int diff=0;
        for(int i=0;i<n;i++) if(s[i]!=t[i]) diff++;
        cout<<diff/2<<endl;
    }
}
/*obs
-we arent required to do shifting exactly just check how many steps are needed to sort the array
how can we check that? is it possible to make sorting algorithm that counts the number of swaps?
and check the no of changes between two strings?? and return the diff
but this approach gives wrong ans
a swap contains changing 2 ele so ? diff/2?

*/