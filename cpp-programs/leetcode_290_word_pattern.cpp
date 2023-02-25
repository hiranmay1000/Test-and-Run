#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;

bool wordPattern(string& pattern, string s) {
    s.push_back(' ');
    map<char, string> matched;
    vector<string>  words;

    string temp = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ') {
            temp += s[i];
        }
        else if (s[i] == ' '){
            words.push_back(temp);
            temp = "";
        }
    }

    int i = 0;
    for(auto item:matched){
        matched.insert(pair<char, string>(pattern[i], words[i]));
        i++;
    }

    for(auto it:matched){
        cout << it.first << ' ' << it.second << endl;
    }

    return -1;
}

int main()
{
    string pattern = "abban";
    string s = "dog cat cat dog";

    cout << wordPattern(pattern, s) << endl;

    return 0;
}