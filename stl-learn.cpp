#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> a = {1, 3, 2, 6, 4, 5};

    a.push_back(12);
    bool isPresent;

    isPresent = binary_search(a.begin(), a.end(), 4);

    cout << isPresent << endl;

    return 0;
}
