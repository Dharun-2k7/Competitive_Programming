#include<bits/stdc++.h>
using namespace std;
#define int long long 

int32_t main(){
	int n,s,l;cin>>n>>s>>l;
	vector<int>a(n);
	for(int i=0;i<n-1;i++)cin>>a[i];

	vector<int>pref(n,0);
	for(int i=1;i<n;i++){
		pref[i]=pref[i-1]+a[i-1];
	}

	int ans=1;

	for(int i=0;i<s;i++){
		for(int j=s-1;j<n;j++){
			int x=pref[s-1]-pref[i];
			int y=pref[j]-pref[s-1];
			int d=min(2*x+y,2*y+x);
			if(d<=l) ans=max(ans,j-i+1);
		}
	}

	cout<<ans<<endl;
}