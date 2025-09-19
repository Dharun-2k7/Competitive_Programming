<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
    int n,s;
    cin >> n>>s;
    int sum=0;
    int freq[3] = {0,0,0};
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        sum += x;
        freq[x]++;
    }
    if(sum>s|| s-sum==1){
        while(freq[0]--)cout << "0 " ;
        while(freq[2]--)cout << "2 " ;
        while(freq[1]--)cout << "1 " ;
        cout << "\n";
    }
    else cout << "-1\n";
}
    return 0;
}
//observations:
//if s < sum of a--any works
//if s == sum of a--impossible
=======
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
    int n,s;
    cin >> n>>s;
    int sum=0;
    int freq[3] = {0,0,0};
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        sum += x;
        freq[x]++;
    }
    if(sum>s|| s-sum==1){
        while(freq[0]--)cout << "0 " ;
        while(freq[2]--)cout << "2 " ;
        while(freq[1]--)cout << "1 " ;
        cout << "\n";
    }
    else cout << "-1\n";
}
    return 0;
}
//observations:
//if s < sum of a--any works
//if s == sum of a--impossible
>>>>>>> b9054e93db9d6de379b4b331ce29a691516046cc
// if s>=sum and 0 followed by 1 .. alice always wins(avoid 0 and 1 together)