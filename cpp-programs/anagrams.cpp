#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// Print Yes / No based on its possibility

int main()
{
    int n;
    bool isPresent = false;
    cin >> n; // no of input times (2 inputs each iteration)
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        string p; // string 1
        string q; // string 2
        cin >> p >> q;
        cin.ignore();

        p.erase(remove(p.begin(), p.end(), ' '), p.end());
        q.erase(remove(q.begin(), q.end(), ' '), q.end());

        if (p.length() != q.length())
        {
            isPresent = false;
        }

        sort(p.begin(), p.end()); // sorting
        sort(q.begin(), q.end()); // sorting

        transform(q.begin(), q.end(), q.begin(), ::tolower); // transforming all the chracter present in string to lowercase
        transform(p.begin(), p.end(), p.begin(), ::tolower); // transforming to lowercase

        for (int i = 0; i < q.size(); i++)
        {
            if (q[i] != p[i])
            {
                isPresent = false;
                break;
            }
        }

        isPresent = true;
    }

    for (int i = 0; i < n; i++)
    {
        if (isPresent == true)
        {
            cout << "Yes" << endl;
        }
        else if (isPresent == false)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Check your input\n";
        }
    }
}