#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    stack<string> st;
    while (n--) {
        string cmd;
        cin >> cmd;
        if (cmd == "pwd") {
            vector<string> temp;
            stack<string> copy = st;
            while (!copy.empty()) {
                temp.push_back(copy.top());
                copy.pop();
            }
            reverse(temp.begin(), temp.end());
            cout << "/";
            for (auto &dir : temp) {
                cout << dir << "/";
            }
            cout << "\n";
        }
        else { 
            string path;
            cin >> path;
            if (path[0] == '/') {
                while (!st.empty()) st.pop();
                path = path.substr(1);
            }
            string part;
            stringstream ss(path);
            while (getline(ss, part, '/')) {
                if (part == "" || part == ".") continue;
                if (part == "..") {
                    if (!st.empty()) st.pop();
                } 
                else {
                    st.push(part);
                }
            }
        }
    }
}
