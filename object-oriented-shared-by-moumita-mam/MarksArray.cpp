using namespace std;
#include<iostream>

main(){
	int marks[20];
	cout<<"Enter the number of students:\n";
	int n;
	cin>>n;
	cout<<"Enter the marks:\n";
	for(int i=0;i<n;i++){
		
		cin>> marks[i];
	}
	
	int max=marks[0];
	
	for(int i=0;i<n;i++){
		
		if(max <= marks[i])
			max=marks[i];
	}
	cout<< "The maximum Marks is:"<<max<<endl;
}