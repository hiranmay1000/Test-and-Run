#include <bits/stdc++.h>
using namespace std;

void reachHome(int src, int dest) {
    // base case 
    if (src == dest) { cout << "\nReached Home succesfully!" << endl; return; }

    cout << src << " ";
    reachHome(src + 1, dest);
    return;
}

int main()
{
    int src = 1;
    int dest = 10;

    reachHome(src, dest);
}