#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll p0;
    if(!(cin >> n >> p0)) return 0;

    vector<ll> sA(n), sH(n), vA(n), vH(n);
    for(int i = 0; i < n; ++i) cin >> sA[i];
    for(int i = 0; i < n; ++i) cin >> sH[i];
    for(int i = 0; i < n; ++i) cin >> vA[i];
    for(int i = 0; i < n; ++i) cin >> vH[i];

    vector<char> alive(n, 1); 
    ll skillA = p0, skillH = p0;
    ll total = 0;
    int rem = n;
    while(rem > 0){
        int bestIdx = -1;
        int bestWho = -1;
        ll bestGain = -1;

        for(int i = 0; i < n; ++i){
            if(!alive[i]) continue;
            ll gA = skillA * vA[i];
            if(gA > bestGain){
                bestGain = gA;
                bestIdx = i;
                bestWho = 0;
            }
            ll gH = skillH * vH[i];
            if(gH > bestGain){
                bestGain = gH;
                bestIdx = i;
                bestWho = 1;
            }
        }

        alive[bestIdx] = 0;
        --rem;
        if(bestWho == 0){
            total += skillA * vA[bestIdx];
            skillA += sA[bestIdx];
        } else {
            total += skillH * vH[bestIdx];
            skillH += sH[bestIdx];
        }
    }

    cout << total << '\n';
    return 0;
}
