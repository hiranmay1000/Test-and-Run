using namespace std;

#include<iostream>

class ConstructorTest{
	int x,y;
	public:
	ConstructorTest();
	ConstructorTest( int );
	ConstructorTest (int , int );
	ConstructorTest(ConstructorTest &);
	int sum();
	void display();
	~ConstructorTest();
};

ConstructorTest:: ConstructorTest(){
	x=10;
	y=20;

}
ConstructorTest::ConstructorTest(int x1){
	x=x1;
	y=100;

}

ConstructorTest::ConstructorTest(int x1, int y1){
	x=x1;
	y=y1;

}


ConstructorTest::ConstructorTest(ConstructorTest &c){
	x=c.x;
	y=c.y;

}
ConstructorTest::~ConstructorTest(){}

void ConstructorTest:: display(){

	cout<<"x="<<x <<"\n";
	cout<<"y="<<y<<"\n";
}

int main(){
	ConstructorTest c1;
	ConstructorTest c2(100,200);
	int x,y;
	cout<<"Enter the first number";
	cin>>x;
	cout<<"Enter the second number";
	cin>>y;

	ConstructorTest c3(x,y);
	c1.display();
	c2.display();
	c3.display();
	ConstructorTest c4(c3);
	c4.display();
	return 0;
}