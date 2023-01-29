#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string c1;
    string c2;
    cin >> c1 >> c2; cin.ignore();

    if(c1==c2){
        cout << "DRAW";
    }

    if(c1=="R" and c2=="S"){
        cout << "P1" ;
    }else if(c1=="P" and c2=="R"){
        cout << "P1";
    }else if(c1=="S" and c2=="P"){
        cout << "P1";
    }else if(c1!=c2){
        cout << "P2";
    }

    cout << endl;

}