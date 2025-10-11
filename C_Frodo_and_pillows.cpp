#include<bits/stdc++.h>
using namespace std;
#define ll long long
    ll n,m,k;
    ll pill(ll bed,ll x){
        if(bed>=x-1){
            ll sum=(x-1)*x/2;
            sum+=(bed-(x-1))*1;
            return sum;
        }
        else{
            ll last=x-bed;
            ll sum=(x-1+last)*bed/2;
            return sum;
        }
    } 
    bool poss(ll x){
        ll left=k-1;
        ll right=n-k;
        ll tot=x+pill(left,x)+pill(right,x);
        return tot<=m;
    }
    int main(){
        cin >>n>>m>>k;
        ll low=1, high=m, ans=1;
        while(low<=high){
            ll mid=(low+high)/2;
            if(poss(mid)){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        cout<<ans<<endl;
    }
    

/*
we need to find the amt of pillows frodo can hold such that everyone else has at;east 1 
we can distribute the pillows such that frodo has the max and neighbours are atleast ok
we can consider this as the water puzzle
we pour water into the top mug( frodo)
but the water will naturally flow down to the next tub
so if frodo gets x pillows each neighbour gets 1 less than the prev until it reacher 1 
ths tot wat = frodos x + the sum of bneoighb

*/