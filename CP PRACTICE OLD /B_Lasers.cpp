#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
int main(){
    int t; cin >> t;
    while(t--){
        int n,m,x,y;
        cin >> n >> m >> x >> y;
        vi a(n), b(m);
        for(int i=0;i<n;i++) cin >> a[i];
        for(int j=0;j<m;j++) cin >> b[j];
        
        cout << n + m << endl;
    }
}

/*observation
whatever the point maybe we just need to cross when there is a laser right?
test case :
1 1 2 2
1
1
n+m=2 -- sample output also 2 
same goes with smple output 2
*/
