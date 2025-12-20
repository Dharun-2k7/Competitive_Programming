#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >>t;
    cin.ignore();
    while(t--){
        string s; getline(cin,s);
        for(char &c :s){
            if(c>='a'&& c<='z'){
                c='a'+(c-'a'+13)%26;
            }
            else if(c>='A'&& c<='Z'){
                c='A'+(c-'A'+13)%26;
            }
        }
        cout <<s <<endl;
    }
}