#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        cout << 2LL * x << endl;
    }
    return 0;
}

/*obs
we need to get a number such that concat of x and y is divisible by x+y
can we do this my checking the multiples of x? 
also there can be multiple y for a given x
acc to test case we can se that x+y divides x#y
*/