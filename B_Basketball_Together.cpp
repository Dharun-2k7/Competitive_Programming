#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    int n,d; 
    cin >> n >> d;
    vector<int> a(n);
    for (auto &e : a)
        cin >> e;
    sort(a.begin(), a.end());
    int res = 0;
    int j = n - 1;
    int i = 0;
    while (j >= 0)
    {
        ll sum = a[j];
        if (sum > d)
        {
            res++;
            j--;
        }
        else
        {
            ll dif = d - sum + 1;
            int nop = ceil(double(dif) / double(sum));
            i = i + nop;
            if (i > j)
                break;
            res++;
            j--;
        }
    }
    cout << res;

}