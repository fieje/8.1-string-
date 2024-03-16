#include <iostream>
#include <string>
using namespace std;

int Count(const string& s) {
    int k = 0;
    size_t pos = 0;
    while ((pos = s.find('+', pos)) != string::npos) {
        if (pos > 0 && pos < s.length() - 1 && s[pos + 1] == '-')
            k++;
        pos++; 
    }
    return k;
}

string Change(string s) {
    size_t pos = 0;
    while ((pos = s.find('+', pos)) != string::npos) {
        if (pos > 0 && pos < s.length() - 1 && s[pos + 1] == '-')
            s.replace(pos - 1, 3, "****");
        pos++; 
    }

    pos = 0;
    while ((pos = s.find('.', pos)) != string::npos) {
        s.replace(pos, 1, "**");
        pos += 2;
    }

    return s;
}

int main() {
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);
    cout << "Number of '+-' combinations: " << Count(str) << endl;
    string dest = Change(str);
    cout << "Modified string: " << dest << endl;
    return 0;
}
