#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "Hello world";

    while (s.find("hello") < s.length())
    {
        s.erase(s.find("Hello"), s.length());
    }

    cout << s << endl;

}