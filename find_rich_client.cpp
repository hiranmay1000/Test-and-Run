#include<iostream>
using namespace std;

class BANK {
    string name;
    double amount;

    public:
        void setData(){
            cin >> name;
            cin >> amount;
        }

        void getData(){
            cout << name << endl;
            cout << amount << endl;
        }
};


int main()
{
    BANK clients[3];

    for (int i = 0; i < 3; i++)
    {
        clients++;
    }

    return 0;
}