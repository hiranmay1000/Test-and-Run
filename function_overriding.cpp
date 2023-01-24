#include<iostream>
using namespace std;

class MainBank {
    int principal;
    int insurance_amount;

    int a = 0, b = 0, c = 0;
public:
    void moneyAllotment() {
        a = (principal * 20) / 100;
        b = (principal * 30) / 100;
        c = (principal * 50) / 100;
    }
};

class Sbi: public MainBank {};

class Hdfc: public MainBank {};

int main()
{
    
    return 0;
}