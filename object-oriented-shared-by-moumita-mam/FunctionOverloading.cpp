using namespace std;
#include<iostream>

void square(int n);
void square(double n);
void square(char ch);

int main(void)
{
	int n=5;				
	double d=3.5;		
	square(n);		//	square of integer 5 = 25
	square(d);		//	square of double 3.5 = 12.25
	square('A');		//	square of character A = AA
	return 0;
}

void square(int n)
{
	cout <<"square of integer" << n <<" =" << n*n << endl;
}
void square(double n)
{
	cout <<"square of double" << n <<" =" << n*n << endl;
}
void square(char ch)
{
	cout <<"square of character" << ch <<" =" <<ch <<ch << endl;
}
