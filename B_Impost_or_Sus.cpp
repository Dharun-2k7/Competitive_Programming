#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string r;
        cin >> r;
        int n = r.size();

        int total_u = 0;
        vector<int> s_positions;
        for (int i = 0; i < n; i++) {
            if (r[i] == 'u') total_u++;
            else s_positions.push_back(i);
        }

        long long kept_u = 0; // maximum u's that can stay as u
        if (s_positions.empty()) {
            // no original 's', must create at least two
            kept_u = (n - 1) / 2;
        } else {
            int m = s_positions.size();
            // before first s
            kept_u += s_positions[0] / 2;
            // after last s
            kept_u += (n - 1 - s_positions.back()) / 2;
            // between consecutive s's
            for (int i = 0; i < m - 1; i++) {
                kept_u += (s_positions[i + 1] - s_positions[i]) / 2;
            }
        }

        cout << total_u - kept_u << "\n";
    }

    return 0;
}

/*
obs:

a sus string shld have atleast 2 s and every u in that shld have same num of diff b/w the nearest s on right and left 
so u must be in mid of 2 s 
no 2 U characters can be consecutive between 2 s’s , as that would make our 2nd condition false
*/