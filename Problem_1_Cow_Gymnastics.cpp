#include <bits/stdc++.h>
using namespace std;
int n, k;
int rankings[10][20], better[20][20];
int main() {
	cin >> k >> n;
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < n; j++) {
			cin >> rankings[i][j];
			rankings[i][j]--;
		}
	}
	for (int i = 0; i < k; i++) {              
		for (int j = 0; j < n; j++) {          
			for (int k = j + 1; k < n; k++) {  
				better[rankings[i][j]][rankings[i][k]]++;
			}
		}
	}
	int ans = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (better[i][j] == k)  
            ans++;
		}
	}
	cout << ans;

	return 0;
}
