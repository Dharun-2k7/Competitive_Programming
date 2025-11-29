#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >>t;
    while(t--){
        int n;cin>>n;
        char  c; cin >>c;
        string m; cin >>m;
        string s= m+m;
        int lg=-1;
        int mx=0;
        for(int i=2*n-1;i>=0;i--){
            if(s[i]=='g') lg=i;
            if(s[i]==c && lg!=-1) mx=max(mx,lg-i);
    }
    cout<<mx<<endl;
    }
}
/*
maybe the distance b/w the last occurence of C and the next G(check the dis b/w G's and find the maximum amonng them )
in case if g is the last occurence then we shld chekc the elements before G 

rggry -- last occ of  R --4th place the next g is at 8th place
so 3 signals 

when c=G ans 0 

3 r 
rrg 
g is last occ so we can check from front so r in 1 and g in 3 so 2

*/