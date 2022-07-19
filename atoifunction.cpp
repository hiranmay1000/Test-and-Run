#include <bits/stdc++.h>
using namespace std;

// A simple atoi() function
int myAtoi(string s)
{
    int sum=0;
    if(s[0]=='-'){
        for(int i=1; i<s.length(); i++){
            int n=s[i]-'0';
            sum=n+(sum*10);
        }
    }
    return sum*(-1);
}

// Driver code
int main()
{
    string s = "-12";

    // Function call
    int val = myAtoi(s);
    cout << val << endl;
    return 0;
}
