using namespace std;
#include<iostream>
inline int cube (int x)
{
	int result= x*x*x;
	return result;
	
}

int main(){
	
	const int x=10;
	//x=20;
	cout<<x;
	cout<<cube(x);
	return 0;
}