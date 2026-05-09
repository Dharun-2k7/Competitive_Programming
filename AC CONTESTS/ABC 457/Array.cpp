#include<bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >>n;
  vector<int>a(n);
  for(int &i:a) cin >>i;
  int x; cin >>x;
  cout<<a[x-1]<<endl;
}