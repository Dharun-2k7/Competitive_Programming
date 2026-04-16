#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string message;
    getline(cin, message);

    if (message.size() >= 25) {
        cout << "ERROR\n";
        return 0;
    }

    map<char, string> morse = {
        {'A', ".-"},   {'B', "-..."}, {'C', "-.-."}, {'D', "-.."},  {'E', "."},
        {'F', "..-."}, {'G', "--."},  {'H', "...."}, {'I', ".."},   {'J', ".---"},
        {'K', "-.-"},  {'L', ".-.."}, {'M', "--"},   {'N', "-."},   {'O', "---"},
        {'P', ".--."}, {'Q', "--.-"}, {'R', ".-."},  {'S', "..."},  {'T', "-"},
        {'U', "..-"},  {'V', "...-"}, {'W', ".--"},  {'X', "-..-"}, {'Y', "-.--"},
        {'Z', "--.."},
        {'0', "-----"}, {'1', ".----"}, {'2', "..---"}, {'3', "...--"}, {'4', "....-"},
        {'5', "....."}, {'6', "-...."}, {'7', "--..."}, {'8', "---.."}, {'9', "----."},
        {' ', "/"}
    };

    string encoded = "";
    for (char c : message) {
        if (isalnum(c) || c == ' ') {
            c = toupper(c);
            encoded += morse[c] + " ";
        } else {
            cout << "ERROR\n";
            return 0;
        }
    }

    if (!encoded.empty() && encoded.back() == ' ')
        encoded.pop_back();
    cout << encoded << "\n";
    return 0;
}
