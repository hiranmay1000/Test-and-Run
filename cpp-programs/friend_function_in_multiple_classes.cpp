#include <bits/stdc++.h>

using namespace std;

class ABC; // forward declaration
class XYZ {
    int a;
public:

    void setNo(){
        cin >> a;
    }

    friend void max(XYZ, ABC);
};

class ABC{
    int c;
public:

    void setNo(){
        cin >> c ;
    }

    friend void max(XYZ, ABC);
};

void max(XYZ p, ABC q){
    if(p.a < q.c){
        cout << "Output: " << q.c;
    }else
        cout << "Output: " << p.a;
}

int main(){
    ABC _abc;
    XYZ _xyz;

    _abc.setNo();
    _xyz.setNo();
    max(_xyz,_abc);
}