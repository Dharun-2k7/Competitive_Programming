#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fo(i,n) for(int i=0;i<n;i++)
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        vector<ll> a(n);
        vector<int> b(k);
        fo(i,n) cin >> a[i];
        fo(i,k) cin >> b[i];
        sort(a.rbegin(), a.rend());
        sort(b.begin(), b.end());
        int used = 0;
        int sum = 0;
        fo(i, k) {
            if (sum + b[i] <= n) {
                sum += b[i];
                used++;
            } else break;
        }
        ll total = 0;
        fo(i,n) total += a[i];
        ll free = 0;
        int pos = 0;
        int ones = 0;
        while (ones < used && b[ones] == 1) ++ones;
        fo(i, ones) {
            free += a[pos];
            pos++;
        }
        for (int i = ones; i < used; ++i) {
            int x = b[i]; 
            free += a[pos + x - 1];
            pos += x; 
        }

        ll ans = total - free;
        cout << ans << endl;
    }
}
/*
we have got 2 choices
we can buy a product i by paying a[i] coins 
or use a discount voucher to buy it as part of group purchase
we are given k discount vouchers b1,b2,b3
the no of products = value of voucher and pay only for x-1 most expensice ? wt do they mean here
cheapest is free of cost  so min(smth) is free
1 voucher can only be used once 
minimum total cost to purchase all n products 

inputs--
n= number of products ; k=no of vouchers 
a[1..n]=prices of prods ; b[i...n] value of discount vouchers

in test case 1
5 3
18 3 7 2 9
3 1 1
we are given this where the largest elements where chosen when there was only 1 voucher ? does that mean if there is only 1 number then its the minimum num so we can get it for free 
we can try greedy approach 
coz in 2nd test case thats not the case as there is only 1 voucher so if we leave the max element out then we get 19 
so if there are only 1 voucher can we check the minimal value ?

generally to minimse we minimise cost by making the most expensive product free( when there is 1 voucher of value 1 )
so the small vouchers are better for us to minimise the cost than large ones

strategy:
sort prods in desc order
sort vouchers in asc order 
so if the voucher is the least we can use it for the max value 
why does this approach fail?
can we use the biggest voucher for the less priced prods?
using a voucher of size 1 is important --> we can make the most expensive completely free 
but the 1st strat failed at pretest 2 ?
why ? 
ok now how do i handle vouchers with size >1? hmm so like, if a voucher is  3 then i need to pick 3 products, right? i should pay for the 2 most expensive ones and the cheapest one just becomes free. so maybe i can just take the next 3 largest unassigned products and then mark the last one in that group as free. then move forward and do the same for the next voucher?
*/

