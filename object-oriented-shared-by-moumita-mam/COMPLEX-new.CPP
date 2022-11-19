#include<iostream.h>
#include<conio.h>

class Complex{
int real,img;
public:
void getData();
void display();
};

void Complex:: getData(){
cout<<"Enter the real part of the complex number";
cin>>real;
cout<<"Enter the imaginary part of the complex number";
cin>>img;
}
void Complex:: display(){

cout<<real<<"+i"<<img<<"\n";
}

int main(){
Complex c1;
clrscr();
c1.getData();
c1.display();

getch();

return 0;
}