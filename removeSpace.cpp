#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "Hello coding ninjas how everything going";
    s += ' ';                   // add ' ' to push last element also into the stack.

    stack<string> st;

    string t = "";

    for (int i = 0; i < s.size(); i++) {
        if (s[i] != ' ') {
            t += s[i];          // extract each words.
        }
        if (s[i] == ' ') {
            st.push(t);         // pushing strings into stack.
            st.push("@40");     // replace space with this keywords.
            t = "";             // replce t with null string.
        }
    }
    st.pop();

    stack<string> temp;         // temporary stack for reversing order of the original stack.

    while (!st.empty()) {
        temp.push(st.top());    // push into temp stack for reversal.
        st.pop();
    }

    string ans = "";

    while (!temp.empty()) {
        ans += temp.top();
        temp.pop();
    }

    cout << ans;
    cout << endl;
}
