#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ull unsigned long long
#define vi vector<int>
#define pb push_back
#define all(v) v.begin(),v.end()
#define rep(i,a,b) for(int i=a;i<b;i++)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define nl "\n"
#define N 100010

char s[N];

bool isp(vi z,int idx){
    for(int i:z) if(i==idx) return true;
    return false;
}

int fun(int r,vi& idx1,vi& idx2,int c1,int c2,vi& Del){
    c1=min(c1,(int)3);
    c2=min(c2,(int)3);
    int ans=-1;
    rep(i,0,c1+1){
        rep(j,0,c2+1){
            if((r-i-j*2+90)%3==0){
                int pos=i+j;
                if(ans==-1){
                    ans=pos;
                    rep(k,0,i) Del.pb(idx1[k]);
                    rep(k,0,j) Del.pb(idx2[k]);
                }
                else if(pos<ans){
                    ans=pos;
                    Del.clear();
                    rep(k,0,i) Del.pb(idx1[k]);
                    rep(k,0,j) Del.pb(idx2[k]);
                }
            }
        }
    }
    return ans;
}

void solve(){
    cin>>s;
    int n=0;
    while(s[n]!='\0') n++;
    reverse(s,s+n);

    int ans=-1,ld=0;
    vi Del;
    int c0=0,c1=0,c2=0;
    vi idx1,idx2;
    int r=0;

    for(int i=0;i<n;i++){
        int d=s[i]-'0';
        d%=3;
        r=(r+d)%3;
        c0+=d==0;

        if(s[i]=='0') continue;

        vi posdel;
        int pos=fun(r,idx1,idx2,c1,c2,posdel);

        if(pos!=-1){
            pos+=(n-1-i);
            if(ans==-1 || pos<ans){
                ans=pos;
                Del=posdel;
                ld=i;
            }
        }

        c1+=d==1;
        c2+=d==2;
        if(d==1) idx1.pb(i);
        if(d==2) idx2.pb(i);
    }

    if(c0>=1 && ans==-1){
        cout<<0<<nl;
        return;
    }

    if(ans==-1){
        cout<<-1<<nl;
        return;
    }

    string ansS;
    rep(i,0,ld+1){
        if(isp(Del,i)) continue;
        ansS.pb(s[i]);
    }

    reverse(all(ansS));
    cout<<ansS<<nl;
}

int32_t main(){
    fast
    //test();
    solve();
    return 0;
}


/*
 ██████████   █████                                              
░░███░░░░███ ░░███                                               
 ░███   ░░███ ░███████    ██████   ████████  █████ ████ ████████ 
 ░███    ░███ ░███░░███  ░░░░░███ ░░███░░███░░███ ░███ ░░███░░███
 ░███    ░███ ░███ ░███   ███████  ░███ ░░░  ░███ ░███  ░███ ░███
 ░███    ███  ░███ ░███  ███░░███  ░███      ░███ ░███  ░███ ░███
 ██████████   ████ █████░░████████ █████     ░░████████ ████ █████
░░░░░░░░░░   ░░░░ ░░░░░  ░░░░░░░░ ░░░░░       ░░░░░░░░ ░░░░ ░░░░░

 Author: Dharun
*/