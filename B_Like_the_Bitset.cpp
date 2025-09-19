<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; 
    cin >> t; 
    while(t--){
        int n,k; 
        cin >> n >> k;
        string s; 
        cin >> s;
        int cnt=0, bad=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1') cnt++;
            else cnt=0;
            if(cnt>=k)
            { 
                bad=1; 
                break; 
            }
        }
        if(bad) {
            cout << "NO" << endl;
            continue;
        }
        vector<int> zeros, ones, p(n);
        for(int i=0;i<n;i++){
            if(s[i]=='0') zeros.push_back(i);
            else ones.push_back(i);
        }
        int cur = n;
        for(int i: zeros) p[i]=cur--;
        for(int i: ones) p[i]=cur--;
        cout << "YES" << endl;
        for(int i=0;i<n;i++) {
            if(i) cout << " ";
            cout << p[i];
        }
        cout << endl;
    }
}

/*my obs 
ok s is of 0/1
1 cannot be max in interval len >= k wait can i just check consecutive 1's? yeah if run >= k then NO
otherwise it can be good 
wat shall i do so 1 wont be the max? assing max nums to 0? smaller to 1?
=======
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; 
    cin >> t; 
    while(t--){
        int n,k; 
        cin >> n >> k;
        string s; 
        cin >> s;
        int cnt=0, bad=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1') cnt++;
            else cnt=0;
            if(cnt>=k)
            { 
                bad=1; 
                break; 
            }
        }
        if(bad) {
            cout << "NO" << endl;
            continue;
        }
        vector<int> zeros, ones, p(n);
        for(int i=0;i<n;i++){
            if(s[i]=='0') zeros.push_back(i);
            else ones.push_back(i);
        }
        int cur = n;
        for(int i: zeros) p[i]=cur--;
        for(int i: ones) p[i]=cur--;
        cout << "YES" << endl;
        for(int i=0;i<n;i++) {
            if(i) cout << " ";
            cout << p[i];
        }
        cout << endl;
    }
}

/*my obs 
ok s is of 0/1
1 cannot be max in interval len >= k wait can i just check consecutive 1's? yeah if run >= k then NO
otherwise it can be good 
wat shall i do so 1 wont be the max? assing max nums to 0? smaller to 1?
>>>>>>> b9054e93db9d6de379b4b331ce29a691516046cc
*/