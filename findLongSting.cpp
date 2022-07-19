#include <bits/stdc++.h>
using namespace std;

int main(){
    string a[]={"helloworld", "worlds", "muskilsenviliy","happilys"};
    int size=sizeof(a)/sizeof(a[0]);

    string big="";
    for (int i = 0; i < size; i++)
    {
        if(a[i].length()>big.length()){
            big=a[i];
        }
    }
    cout << big << endl;

    cout << size << endl;
    return 0;
}