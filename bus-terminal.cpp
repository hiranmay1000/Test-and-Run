#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int c;
    cin >> c; cin.ignore();
    int n;
    cin >> n; cin.ignore();
    int count=0;

    for (int i = 0; i < n; i++) {
        int p;
        int temp=0;
        cin >> p; cin.ignore();
        if(p!=c){
            temp=p-c;
            p=temp+(p-c);
            count++;
        }
    }
    cout << count << endl;

}


// Input

// 20
// 3
// 50
// 20
// 5


// Output

// 16


