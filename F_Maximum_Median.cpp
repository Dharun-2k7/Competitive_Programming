#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; 
    ll k;
    cin >>n>>k;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin >>a[i];
    sort(a.begin(),a.end());
    int mid=n/2;
    ll pos=a[mid];
    for(int i=mid+1;i<n;i++){
        ll cnt=i-mid;
        ll diff=a[i]-pos;
        if(diff==0) continue;
        ll cost=diff*cnt;
        if(cost<=k){
            k-=cost;
            pos=a[i];
        }
        else{
            pos+=k/cnt;
            k=0;
            break;
        }
        }
        ll fin=n-mid;
        pos+=k/fin;
        cout <<pos<<endl;
    }

/*
we need to maximise the median of array by incremeneting one element in the array by 1 
we can sort the array in ascending order (increase)
as n is always odd then the median is m=n/2;
our goal is increasing 
values form mid to n-1 is important 
we can perform bs here 
we can make k no of inceremebts

lets take we wannamake mid more than some val x 
then the elements from mid -- n-1 >=x?
so wat will be the maxi val that we can make our median into

if a[i]>=x no need to change 
but if its less then x-a[i] increments 
if the sum of these <=k its possile 
for bs low = mid , high - a[mid]+k+1



*/