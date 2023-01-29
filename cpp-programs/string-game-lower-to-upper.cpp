#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    getline(cin, s);

    int n = s.length();
    string temp = "";
    for (int i = 0; i < n; i++) {
        char ch = s[i];
        temp += ch + 1;
    }

    string ans = "";

    for (int i = 0; i < n; i++) {
        char ch = temp[i];
        if (ch > 64 and ch < 91) {
            ans += tolower(ch);
        }
        else if (ch > 96 and ch < 123) {
            ans += toupper(ch);
        }
    }

    
    cout << ans << endl;
}