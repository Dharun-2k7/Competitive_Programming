#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long x, y;
        cin >> x >> y;
        cout << (y >= x + 1 ? 2 : (y >= 2 && x >= y + 2 ? 3 : -1)) << '\n';
    }
    
    return 0;
}


/*
We need to move (0,0) to (x,y)
we are allowed to move in alternative time to x and then y 
and find the minimum value 
the next length should be greater than the previous one 
how can we implement this?
can we try a greedy approach ?
first try 2 steps: move x then y check if y > x then it works
if not, try 3 steps: x,y,x  need something like a1 + a3 = x and a2 = y also a1 < a2 < a3
we shld check if we can find some a1 that works if not possible in 2 or 3 steps, then answer is -1

*/