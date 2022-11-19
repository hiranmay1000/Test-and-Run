#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "Hello coding ninjas how everything going";

    string ans = "";

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != ' ') {
            ans += s[i];
        }
        else {
            ans += "@40";
        }
    }

    cout << ans << endl;

}