//Write a C++ program to accept two integers and check whether they are equal or not

#include<iostream>
using namespace std;

int main(){

	int n1,n2;
	
	cout<<"Enter number for n1: ";
	cin>>n1;
	cout<<"Enter number for n2: ";
	cin>>n2;
	
	if(n1==n2)
	{
		cout<<"n1 and n2 are equal";
	}
	else
	{
		cout<<"n1 and n2 are not equal";
	}

	return 0;
}

