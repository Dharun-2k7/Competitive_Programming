<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, b;
    cin >> n >> b;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    int ans = b;
    for (int i = 0; i < n; i++) { 
        int buy = b / arr[i];     
        int rem = b % arr[i]; 
        for (int j = i + 1; j < n; j++) { 
            int money = buy * arr[j] + rem;
            ans = max(ans, money);
        }
    }

    cout << ans << "\n";
    return 0;
}

//n--> no of days
//b--> no of bourles
//arr--> prices 
=======
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, b;
    cin >> n >> b;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    int ans = b;
    for (int i = 0; i < n; i++) { 
        int buy = b / arr[i];     
        int rem = b % arr[i]; 
        for (int j = i + 1; j < n; j++) { 
            int money = buy * arr[j] + rem;
            ans = max(ans, money);
        }
    }

    cout << ans << "\n";
    return 0;
}

//n--> no of days
//b--> no of bourles
//arr--> prices 
>>>>>>> b9054e93db9d6de379b4b331ce29a691516046cc
