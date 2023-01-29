#include <bits/stdc++.h>
using namespace std;

class Sol {
public:
    int myAtoi(string str)
    {
        long long int result = 0;
        int flag = 1;
        int i = 0;

        i = str.find_first_not_of(' ');
        if (i == string::npos)
            return result;
        if (str[i] == '-' || str[i] == '+')
        {
            if (str[i] == '-') {
                flag = -1;
            }
            else {
                flag = 1;
            }
            i++;
        }
        while (i < str.size() && isdigit(str[i]))
        {
            if ((flag * result) > INT_MAX)
                return INT_MAX;
            if ((flag * result) < INT_MIN)
                return INT_MIN;

            result = 10 * result + (str[i] - '0');
            i++;

        }
        result *= flag;

        return (int)result;
    }
};

int main() {
    Sol _solution;
    cout << _solution.myAtoi(" s -42 safdfadf") << endl;

    return 0;
}