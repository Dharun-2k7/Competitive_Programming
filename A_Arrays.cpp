<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int na,nb,k,m;
    cin >>na >> nb>>k>>m;
    vector<int> a(na), b(nb);
    for(int i = 0; i < na; i++) cin >> a[i];
    for(int i = 0; i < nb; i++) cin >> b[i];
    cout << ((a[k - 1] < b[nb - m]) ? "YES\n" : "NO\n");

=======
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int na,nb,k,m;
    cin >>na >> nb>>k>>m;
    vector<int> a(na), b(nb);
    for(int i = 0; i < na; i++) cin >> a[i];
    for(int i = 0; i < nb; i++) cin >> b[i];
    cout << ((a[k - 1] < b[nb - m]) ? "YES\n" : "NO\n");

>>>>>>> b9054e93db9d6de379b4b331ce29a691516046cc
}