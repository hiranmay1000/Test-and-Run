#include <iostream>
using namespace std;

class employee {
    int salary; // private attribute
public:

    // setter
    void setSalary(int x) {
        salary = x;
    }

    //getter
    int getSalary() {
        return salary;
    }
};

int main()
{
    employee em1;
    em1.setSalary(30000);
    cout << em1.getSalary() << endl;

    return 0;
}