using namespace std;  
#include<iostream>  
void swap(int *x, int *y)  
{  
 int swap;  
 swap=*x;  
 *x=*y;  
 *y=swap;  
} 

void swap(int &x, int &y)  
{  
 int swap;  
 swap=x;  
 x=y;  
 y=swap;  
} 


 
int main()   
{    
 int a=500, b=100;    
 swap(&a, &b);  // passing value to function  
 cout<<"After call by adress Value of a is: "<<a<<endl;  
 cout<<"After call by adress Value of b is: "<<b<<endl;  
 cout<< "Enter the First Number" <<endl;
 cin>>a;
 cout<< "Enter the Second  Number"<<endl;
 cin>>b;
 cout<<"Before  Call by reference Value of a is: "<<a<<endl;  
 cout<<"Before Call by reference Value of b is: "<<b<<endl;
 swap(a,b);
 cout<<"After Call by reference Value of a is: "<<a<<endl;  
 cout<<"After Call by reference Value of b is: "<<b<<endl;
 return 0;  
}    