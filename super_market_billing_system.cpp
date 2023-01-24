#include<iostream>
#include<fstream>
using namespace std;

class Shopping {
private:
    int p_code;
    float price;
    float discount;
    string p_name;

public:
    void menu();
    void administrator();
    void buyer();
    void add();
    void edit();
    void rem();
    void receipt();
};

void Shopping::menu() {
m:
    int choice;
    string email;
    string password;

    cout << "\t\t\t\t___________________________________.\n";
    cout << "\t\t\t\t|                                 |\n";
    cout << "\t\t\t\t|      SUPERMARKET MAIN MENU      |\n";
    cout << "\t\t\t\t|                                 |\n";
    cout << "\t\t\t\t|---------------------------------|\n";
    cout << "\t\t\t\t                                   \n";
    cout << "\t\t\t\t       1. Administrator            \n";
    cout << "\t\t\t\t                                   \n";
    cout << "\t\t\t\t       1. Buyer                    \n";
    cout << "\t\t\t\t                                   \n";
    cout << "\t\t\t\t       1. Exit                     \n";
    cout << "\t\t\t\t                                   \n";
    cout << "\t\t    Please select:";

    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "\t\t\tPlease Login";
        cout << "\t\t\tEmail:";
        cin >> email;
        cout << "\t\t\tPassword:";
        cin >> password;

        if (email == "hiranmay1000@gmail.com" && password == "hiran123") {
            administrator();
        }
        else {
            cout << "Invalid username and password!!!" << endl;
        }
        break;
    case 2:
        buyer();
        break;
    case 3:
        exit(0);
        break;
    default:
        cout << "Incorrect option chosen!" << endl;
        break;
    }
    goto m;
}

void Shopping::administrator() {
    int choice;
    cout << "\t\t\t\t___________________________________.\n";
    cout << "\t\t\t\t|                                 |\n";
    cout << "\t\t\t\t|       ADMINISTRATOR MENU        |\n";
    cout << "\t\t\t\t|                                 |\n";
    cout << "\t\t\t\t|---------------------------------|\n";
    cout << "\t\t\t\t                                   \n";
    cout << "\t\t\t\t       1. Add Product              \n";
    cout << "\t\t\t\t                                   \n";
    cout << "\t\t\t\t       2. Modify Product           \n";
    cout << "\t\t\t\t                                   \n";
    cout << "\t\t\t\t       3. Delete Product           \n";
    cout << "\t\t\t\t                                   \n";
    cout << "\t\t\t\t       4. Back To Main Menu        \n";
    cout << "\t\t\t\t                                   \n";
    cout << "\t\t\t\t       0. Exit                     \n";
    cout << "\t\t\t\t                                   \n";
    cout << "\t\t    Please select:";
    cin >> choice;
    while (1) {
        switch (choice)
        {
        case 1:
            add();
            break;
        case 2:
            edit();
            break;
        case 3:
            rem();
            break;
        case 4:
            menu();
            break;
        case 0:
            exit(0);
        default:
            cout << "Invalid option chosen!!!" << endl;
            break;
        }
    }
}

void Shopping::buyer() {
    int choice;
    cout << "\t\t\t\t___________________________________.\n";
    cout << "\t\t\t\t                                   \n";
    cout << "\t\t\t\t       1. Buy Product              \n";
    cout << "\t\t\t\t                                   \n";
    cout << "\t\t\t\t       2. Go Back                  \n";
    cout << "\t\t\t\t                                   \n";
    cout << "\t\t\t\t       0. Exit                     \n";
    cout << "\t\t\t\t                                   \n";
    cout << "\t\t    Please select:";

    cin >> choice;
    while (1)
    {
        switch (choice)
        {
        case 1:
            receipt();
            break;
        case 2:
            menu();
            break;
        case 0:
            return;
            break;
        default:
            cout << "Choose correct option!!" << endl;
            break;
        }
    }
}

void Shopping::add() {
m:
    fstream data;
    int c;
    int token = 0;
    float p;
    float d;
    string n;

    cout << "\n\n\t\t\tAdd new product";
    cout << "\n\tProduct code: ";
    cin >> p_code;
    cout << "\n\tProduct name: ";
    cin >> p_name;
    cout << "\n\tPrice: ";
    cin >> price;
    cout << "\n\tProduct discount: ";
    cin >> discount;

    data.open("supermarket_database.txt", ios::in);

    if (!data) {
        data.open("supermarket_database.txt", ios::app | ios::out);
        data << " " << p_code << " " << p_name << " " << discount << endl;
        data.close();
    }
    else {
        data >> c >> p >> d;

        while (data.eof())
        {
            if (c == p_code) {
                token++;
            }
            data >> c >> n >> p >> d;
            data.close();
        }

        if (token == 1)
            goto m;
        else {
            data.open("supermarket_database.txt", ios::app | ios::out);
            data << " " << p_code << " " << p_name << " " << discount << endl;
            data.close();
        }
    }
    cout << "Record inserted successfully" << endl;
}

void Shopping::edit() {
    fstream data, data1;
    int pkey;
    int token = 0;
    int c;
    float p;
    float d;
    string n;

    cout << "\n\n\t\t\tModify data" << endl;
    cout << "\t\t\tProduct code:";
    cin >> pkey;

    data.open("supermarket_database.txt", ios::in);
    if (!data) {
        cout << "\n\nFile doesn't exist!" << endl;
    }
    else {
        data1.open("supermarket_database1.txt", ios::app | ios::out);
        data >> p_code >> p_name >> price >> discount;

        while (!data.eof())
        {
            if (pkey == p_code) {
                cout << "\t\t\tProduct new code: ";
                cin >> c;
                cout << "\t\tName of the product: ";
                cin >> n;
                cout << "\t\tPrice: ";
                cin >> p;
                cout << "Discount: ";
                cin >> d;
                data1 << " " << c << " " << n << " " << p << " " << d << endl;
                cout << "\n\nt\t\tReccord edited" << endl;
                token++;
            }
            else {
                data1 << " " << p_code << " " << p_name << " " << price << " " << discount << endl;
            }

            data >> p_code >> p_name >> price >> discount;
        }
        data.close();
        data1.close();

        remove("supermarket_database.txt");
        rename("supermarket_database1.txt", "supermarket_database.txt");

        if (token == 0) {
            cout << "\n\nRecord not found sorry!";
        }
    }
}

void Shopping::rem(){
    fstream data, data1;
    int pkey;
    int token = 0;
    cout << "\n\t\tDelete product" << endl;
    cout << "\n\t\tProduct code: ";
    cin >> pkey;
    data.open("supermarket_database.txt", ios::in);
    if(!data){
        cout << "File doesn't exist" << endl;
    }else{
        data1.open("supermarket_database.txt", ios::app|ios::out);
            }
}

int main()
{
    Shopping shop;

    shop.menu();
    return 0;
}