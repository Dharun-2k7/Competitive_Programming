<<<<<<< HEAD
/*#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vi a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        /* approach 1 
        for(int i=1;i<=n;i++){
            if(cnt[i] == i){ 
                ans += cnt[i];    
            }
        }*/
       /*aproach 2 
       for(int x = 1; x <= n; x++) {
            while(cnt[x] >= x) {
                ans += x;       
                cnt[x] -= x;    
            }
        }*/
       /*
      unordered_map<int,int> cnt;
        int ans = 0;

        for(int x : a) {
            cnt[x]++;
            if(cnt[x] == x) {
                ans += x;
                cnt[x] = 0;
            }
        }

        cout << ans << "\n";  
    }
}
*/
/*obs
so an array is block if the elements in the array equals the size of array 
we need to find the len of longest subseq of A
how to find it?
test case 5:
10 
2 3 3 1 2 3 5 1 1 7 
the longest subseq of A : --  2 2 3 3 3 
can i use a hashmap? to check the count of each element in the array and then append it to the ans?
so this approach fails in 
4
2 2 1 1
as my code (approach 1) checks and return the value which has the count of its value 
so can i subtract the subsequence we have got from the total size so we can decide to add other blocks like [1],[1]
//aproach 2 fails in the final test case
the subtraction may pick elements unusabl ein th esubsequence 
hashmap may solve few cases but it isnt enough  to solve this
this soln traverses in order and adds blocks immeditately 
we might need to use DP normal greedy may not work


*/
#include <bits/stdc++.h>
using namespace std;
    
map<int, vector<int>> b;
 
void solve() {
    int n;
    cin >> n;
    
    b.clear();
    
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    vector<int> sum(n, 0);
    int maxi = 0;
 
    for (int i = 0; i < n; i++) {
        b[a[i]].push_back(i);
        sum[i] = maxi;
 
        int size = b[a[i]].size();
        if (size >= a[i]) {
            int ind = b[a[i]][size - a[i]];
            int possibleValue = sum[ind] + a[i];
            maxi = max(maxi, possibleValue);
        }
    }
 
    cout << maxi << '\n';
}
    
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}

=======
/*#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vi a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        /* approach 1 
        for(int i=1;i<=n;i++){
            if(cnt[i] == i){ 
                ans += cnt[i];    
            }
        }*/
       /*aproach 2 
       for(int x = 1; x <= n; x++) {
            while(cnt[x] >= x) {
                ans += x;       
                cnt[x] -= x;    
            }
        }*/
       /*
      unordered_map<int,int> cnt;
        int ans = 0;

        for(int x : a) {
            cnt[x]++;
            if(cnt[x] == x) {
                ans += x;
                cnt[x] = 0;
            }
        }

        cout << ans << "\n";  
    }
}
*/
/*obs
so an array is block if the elements in the array equals the size of array 
we need to find the len of longest subseq of A
how to find it?
test case 5:
10 
2 3 3 1 2 3 5 1 1 7 
the longest subseq of A : --  2 2 3 3 3 
can i use a hashmap? to check the count of each element in the array and then append it to the ans?
so this approach fails in 
4
2 2 1 1
as my code (approach 1) checks and return the value which has the count of its value 
so can i subtract the subsequence we have got from the total size so we can decide to add other blocks like [1],[1]
//aproach 2 fails in the final test case
the subtraction may pick elements unusabl ein th esubsequence 
hashmap may solve few cases but it isnt enough  to solve this
this soln traverses in order and adds blocks immeditately 
we might need to use DP normal greedy may not work


*/
#include <bits/stdc++.h>
using namespace std;
    
map<int, vector<int>> b;
 
void solve() {
    int n;
    cin >> n;
    
    b.clear();
    
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    vector<int> sum(n, 0);
    int maxi = 0;
 
    for (int i = 0; i < n; i++) {
        b[a[i]].push_back(i);
        sum[i] = maxi;
 
        int size = b[a[i]].size();
        if (size >= a[i]) {
            int ind = b[a[i]][size - a[i]];
            int possibleValue = sum[ind] + a[i];
            maxi = max(maxi, possibleValue);
        }
    }
 
    cout << maxi << '\n';
}
    
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}

>>>>>>> b9054e93db9d6de379b4b331ce29a691516046cc
//pyrox