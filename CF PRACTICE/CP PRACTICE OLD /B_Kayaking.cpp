<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> arr(2*n);
    for(int i = 0; i < 2*n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int ans = INT_MAX;
    for(int i=0;i<2*n;i++){
        for(int j=i+1;j<2*n;j++){
            vector<int> temp;
            for(int k=0;k<2*n;k++){
                if(k!=i && k!=j) temp.push_back(arr[k]);
            }

            int sum = 0;
            for(int p=0;p<(int)temp.size();p+=2){
                sum += temp[p+1]-temp[p];
            }
            ans = min(ans,sum);
        }
    }
    cout << ans << endl;
}


//count of ppl 2n ; kayaks = n-1(carries 2) and 2 single kayak;
// o(n^3)-- pair kayaks and 2 single kayaks
// we can pair the kayaks in any way, but the two single kayaks must be paired with the two heaviest people -- we can think they are at end of arr ( to reduce instability)
//instability -- maybe the diff in weights
// so we need to sort to reduce instability
=======
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> arr(2*n);
    for(int i = 0; i < 2*n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int ans = INT_MAX;
    for(int i=0;i<2*n;i++){
        for(int j=i+1;j<2*n;j++){
            vector<int> temp;
            for(int k=0;k<2*n;k++){
                if(k!=i && k!=j) temp.push_back(arr[k]);
            }

            int sum = 0;
            for(int p=0;p<(int)temp.size();p+=2){
                sum += temp[p+1]-temp[p];
            }
            ans = min(ans,sum);
        }
    }
    cout << ans << endl;
}


//count of ppl 2n ; kayaks = n-1(carries 2) and 2 single kayak;
// o(n^3)-- pair kayaks and 2 single kayaks
// we can pair the kayaks in any way, but the two single kayaks must be paired with the two heaviest people -- we can think they are at end of arr ( to reduce instability)
//instability -- maybe the diff in weights
// so we need to sort to reduce instability
>>>>>>> b9054e93db9d6de379b4b331ce29a691516046cc
