#include<bits/stdc++.h>
using namespace std;
int main(){
    int l,d,v,g,r; cin >>l>>d>>v>>g>>r;
    double t=(double)d/v;
    double cyc=g+r;
    double rem=fmod(t,cyc);
    if(rem>=g){
        t+=cyc-rem;
    }
    t+=((double)(l-d))/v;
    cout <<fixed<<setprecision(10)<<t<<endl;
}