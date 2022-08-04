#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string s="I am a coder and a programmer too.";
    
    string a="";
    string t="";

    transform(s.end(), s.end(), s.begin(), :: tolower);

    for (int i = 0; i < s.length(); i++)
    {
        
    }

    cout << endl;
    cout << a << endl;
}