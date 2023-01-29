#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<string> v = { "a /*This is a test*/", "   multiline  */ b" };
    vector<string> ans;
    string store_val = "";

    for (int i = 0; i < sizeof(v); i++)
    {
        string temp = v[i];
        string verify = "";
        int size = sizeof(temp);
        bool flag = false;
        string store_val = "";

        int j = 0;
        int k = 0;
        while (temp != verify) {
            verify  += temp[k];
            if (temp[j] == '/' and temp[j + 1] == '*') {
                continue;
            }
            else {
                store_val += temp[j];
            }
            j++;
            k++;
        }
        cout << store_val;
    }
}
