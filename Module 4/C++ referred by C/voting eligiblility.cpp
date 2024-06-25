//Check person is eligible for voting or not

#include<iostream>
using namespace std;

int main(){

	int age;
	
	cout<<"Enter an age to check eligiblility for voting"<<endl;
	
	cout<<"Age: ";
	cin>>age;
	
	if(age>=18)
	{
		cout<<"Person is eligible for voting";
	}
	else
	{
		cout<<"Person is not eligible for voting";
	}

	return 0;
}

