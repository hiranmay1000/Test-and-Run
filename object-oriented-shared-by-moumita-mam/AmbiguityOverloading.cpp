using namespace std;
#include<iostream>
int max(int , int );
double max(double , double );
int main(void)
{
	double m = max(5, 5);
	cout << m << endl;
	return 0;
}

int max(int a, int b)		
{							
	if(a>b)				
		return a;				
	else					
		return b;				
}					


double max(double a, double b){
	
	if(a > b)
		return a;
	else
		return b;
}