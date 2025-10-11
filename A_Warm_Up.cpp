#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream fin("warm_up_validation_input.txt");
    ofstream fout("warm_up_validation_output.txt");

    int t; fin >> t;
    for(int cs = 1; cs <= t; cs++) {
        int n;  fin >> n;
        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++) fin >> a[i];
        for(int i = 0; i < n; i++) fin >> b[i];

        bool impossible = false;
        int mxA = *max_element(a.begin(), a.end());
        int mxB = *max_element(b.begin(), b.end());
        if(mxB > mxA) impossible = true;
        for(int i = 0; i < n; i++) if(a[i] > b[i]) impossible = true;

        if(impossible) {
            fout << "Case #" << cs << ": -1\n";
            continue;
        }

        map<int, vector<int>> original_donor;
        map<int, set<int>> all_donor; 
        for(int i = 0; i < n; i++) {
            original_donor[a[i]].push_back(i);
            all_donor[a[i]].insert(i);
        }

        vector<pair<int,int>> ops;

        for(int i = 0; i < n; i++) {
            if(a[i] == b[i]) continue;

            int temp = b[i];
            int donor = -1;

            if(!original_donor[temp].empty()) {
                donor = original_donor[temp].back();
                if(donor == i && original_donor[temp].size() > 1)
                    donor = original_donor[temp][original_donor[temp].size() - 2];
            }

            if(donor == -1 && !all_donor[temp].empty()) {
                donor = *all_donor[temp].begin();
            }

            if(donor == -1 || donor == i) {
                impossible = true;
                break;
            }

            ops.push_back({donor+1, i+1}); 
            a[i] = temp;
            all_donor[temp].insert(i); 
        }

        if(impossible) {
            fout << "Case #" << cs << ": -1\n";
        } else {
            fout << "Case #" << cs << ": " << ops.size() << "\n";
            for(auto &p : ops) fout << p.first << " " << p.second << "\n";
        }
    }

    fin.close();
    fout.close();
    return 0;
}


/* 
as far i can observe if any dish is already over cooked 
i.e) a[i]>b[i] 
then it is impossible to make the dish perfect
so that case turns out to be -1

if a[i]<b[i] then we need to warm it up
we can only warm it up with a dish which is hotter than it 
if there is any element which is as hot as a element in b[i] then its an impossible case too 
we cant heat up the a[i]th element upto b[i]th element

approach that we can try :
so first i can check the max element in array  A and B if the max ele is lesser than max ele in B then its impossible case
if any element in A is greater than to the corresposing element in B then its impossible case too 
if any element in A is equal to corresponding element in b then we can use the A[i]th element to heat up the other elements which are lesser than it 


the sample tc only considers the original hotter thing it wont consider the heated up things
so we can use a map to store the original positions of the elements in A and then another map to store the created donors

*/