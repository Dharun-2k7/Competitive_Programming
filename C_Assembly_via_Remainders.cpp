#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int s=1000;
		cout<<s<<" ";
		for(int i=2;i<=n;i++){
			int x;
			cin>>x;
			s+=x;
			cout<<s<<" ";
		}
		cout<<"\n";
	}
}