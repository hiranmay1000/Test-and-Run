#include <bits/stdc++.h>
using namespace std;

class Matrix {
    int n;
    int arr[3][3];
public:
    void getdata() {
        cout << "Enter no of rows and coloums required: ";
        cin >> this->n;
        cout << "Enter elements: " << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }

        }

    }

    void print() {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }

    }

    Matrix operator + (const Matrix m) {
        Matrix temp;
        for (int k = 0; k < n; k++)
        {
            for (int l = 0; l < n; l++)
            {
                temp.arr[k][l] = this->arr[k][l] + m.arr[k][l];
            }

        }
        return temp;

    }
};

int add(Matrix a, Matrix b){
    return a + b;
}

int main()
{
    Matrix m1, m2, sum;
    cout << "Enter first matrix: " << endl;
    m1.getdata();
    cout << "Enter second matrix: " << endl;
    m2.getdata();
    sum = add(m1, m2);
    cout << "Sum is :" << endl;
    sum.print();
}