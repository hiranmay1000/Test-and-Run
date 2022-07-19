#include <bits/stdc++.h>
using namespace std;

int atoi(string str)
{
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        char ch=str[i];
        if (isdigit(ch)) {
            count++;
        }else if(ch=='-'){
            count++;
        }
    }

    int sum = 0;

    if(str[0]=='-'){
        for (int i = 1; i < str.length(); i++)
        {
            int n=str[i]-'0';
            sum=n+(sum*10);
        }
        sum*=(-1);
    }else{
        for (int i = 0; i < str.length(); i++)
        {
            int n=str[i]-'0';
            sum=n+(sum*10);
        }
    }

    if(str.length()!=count or str[0]=='-' and str[1]=='-'){
        return -1;
    }

    return sum;
}


int main()
{
    string str = "-21";
    int ans = atoi(str);
    cout << ans << endl;
}