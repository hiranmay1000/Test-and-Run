#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1 = "hea";
    string s2 = "bcadeh";//output - 3
    unordered_map<char, int> m, n; //O(1)

    for (auto i : s1) {
        m[i]++; // count occurace of character in s1
    }
    for (char ch : s2) {
        n[ch]++; // count occurance of character in s2
    }

    for (auto i : m) {
        cout << i.first << "\t" << i.second << endl;
    }
    cout << endl;
    for (auto i : n) {
        cout << i.first << "\t" << i.second << endl;
    }

    for (char ch : s2) {
        if (m[ch] > 0 and n[ch] > 0) {
            m[ch]--;
            n[ch]--;// remove similar char
        }
    }

    int count = 0;

    for (auto i : m) {
        count += i.second;
    }

    for (auto i : n) {
        count += i.second;
    }

    cout << count;

    cout << endl;

    cout << "New Part: " << endl;

    unordered_set<string>  hashset;
    hashset.insert("bubble");
    hashset.insert("rubble");
    hashset.insert("white");
    hashset.insert("red");
    hashset.insert("court");
    hashset.insert("polisi");

    string s = "pared"; 

    cout << s.substr(2,5) << endl;

    for(auto word:hashset){
        if(hashset.count(s.substr(2, 5))){
            cout<< word << endl;
        }
    }
}