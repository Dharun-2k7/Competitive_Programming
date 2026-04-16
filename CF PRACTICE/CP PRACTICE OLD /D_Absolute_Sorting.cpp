<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        int mini = 0, maxi = INT_MAX;
        for(int j = 0; j + 1 < n; j++) {
            int x = a[j];
            int y = a[j+1];
            int left = (x + y) / 2;    
            int right = (x + y + 1) / 2;  

            if(x < y) {
                maxi = min(maxi, left);
            }
            if(x > y) {
                mini = max(mini, right);
            }
        }

        if(mini <= maxi) {
            cout << mini << endl;
        } else {
            cout << -1 << endl;
        }
    }
}
//observations
/*
i∈[1,n], replace ai by |ai−x|
 wats this x?
 x---> the value which makes the array sorted 
can we try all the number between 1 and n? --acc to test case most of output "x" is either -1 or between 1 and n(not a good way)
 if we try all the number between 1 and n, then we can find the x which makes the array sorted(may return tle for large test cases)
 maybe the avg of both adjacent terms -- we may check if its sorted?
 so trying out with adjacent pair maybe better optimised
 so if |ai-x| < = |ai+1-x| then we may assume that entire array maybe sorted -- but now how to find the x?
 but it might be in range and b, so we can try all the number between a and b
 but it may depend wether a<b or a>b 
 if such value cannot be found then we can return -1 

 lets take  test cases:-- 
        a-5 b-3 x was 4 ---> x-a <= x-b --> x<=(a+b/2)
        a=10 b=5 x was 42(but we can give any x not a fixed x value)-->x-a <= x=b

=======
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        int mini = 0, maxi = INT_MAX;
        for(int j = 0; j + 1 < n; j++) {
            int x = a[j];
            int y = a[j+1];
            int left = (x + y) / 2;    
            int right = (x + y + 1) / 2;  

            if(x < y) {
                maxi = min(maxi, left);
            }
            if(x > y) {
                mini = max(mini, right);
            }
        }

        if(mini <= maxi) {
            cout << mini << endl;
        } else {
            cout << -1 << endl;
        }
    }
}
//observations
/*
i∈[1,n], replace ai by |ai−x|
 wats this x?
 x---> the value which makes the array sorted 
can we try all the number between 1 and n? --acc to test case most of output "x" is either -1 or between 1 and n(not a good way)
 if we try all the number between 1 and n, then we can find the x which makes the array sorted(may return tle for large test cases)
 maybe the avg of both adjacent terms -- we may check if its sorted?
 so trying out with adjacent pair maybe better optimised
 so if |ai-x| < = |ai+1-x| then we may assume that entire array maybe sorted -- but now how to find the x?
 but it might be in range and b, so we can try all the number between a and b
 but it may depend wether a<b or a>b 
 if such value cannot be found then we can return -1 

 lets take  test cases:-- 
        a-5 b-3 x was 4 ---> x-a <= x-b --> x<=(a+b/2)
        a=10 b=5 x was 42(but we can give any x not a fixed x value)-->x-a <= x=b

>>>>>>> b9054e93db9d6de379b4b331ce29a691516046cc
 */