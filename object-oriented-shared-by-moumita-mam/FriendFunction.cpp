using namespace std;
#include<iostream>
class B;
class A{
	int x;
	public:
	  A(int p){
			x=p;	
			
		}
	friend	void compare (A, B);
		
};

class B{
	int x;
	public:
		B(int q){
			x=q;	
			
		}
		friend void compare (A, B);
		
};

void compare (A obj1, B obj2){
	int max= (obj1.x>obj2.x)?obj1.x: obj2.x;
	cout<<max;
}

int main(){
	A obj1(10);
	B obj2(20);
	compare(obj1,obj2);
}