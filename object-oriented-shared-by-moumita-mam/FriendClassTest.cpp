using namespace std;
#include<iostream>
class B;
class A{
	int x;
	public:
	  A(int p){
			x=p;	
			
		}
	void compare (B&);
		
};

class B{
	int x;
	public:
		B(int q){
			x=q;	
			
		}
		friend class A;
		
};

void A::compare (B &obj2){
	int max= (x>obj2.x)? x: obj2.x;
	cout<<max;
}

int main(){
	A obj1(10);
	B obj2(20);
	obj1.compare(obj2);
}