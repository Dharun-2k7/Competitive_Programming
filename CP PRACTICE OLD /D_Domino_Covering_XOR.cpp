#include<bits/stdc++.h>
using namespace std;
int main(){
    int h,w;
    cin >>h >>w;
    vector<vector<int>> mat(h, vector<int>(w));
    for (int i = 0; i < h; i++) {      
        for (int j = 0; j < w; j++) {   
            cin >> mat[i][j];        
        }
    } 

}