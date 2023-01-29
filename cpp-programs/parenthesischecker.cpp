#include <bits/stdc++.h>
using namespace std;

bool isValid(string x){
    stack<char> st;

    for (int i = 0; i < x.length(); i++)
    {
        if(x[i]=='(' or x[i]=='{' or x[i]=='['){
            st.push(x[i]);
        }else {
            if(st.empty()){
                return false;//it is important to mention
            }
            else if(x[i]==']'){
                if(st.top()!='['){
                    return false;
                }else {
                    st.pop();
                }
            }
            else if(x[i]=='}'){
                if(st.top()!='{'){
                    return false;
                }else {
                    st.pop();
                }
            }
            else if(x[i]==')'){
                if(st.top()!='('){
                    return false;
                }else {
                    st.pop();
                }
            }
        }
    }

    return st.empty();
    
}

int main()
{
    string s = "[()[{()}]]";//
    bool a = isValid(s);

    if (a == true)
    {
        cout << "Balanced" << endl;
    }
    else
        cout << "Not balanced" << endl;

    // return 0;
}