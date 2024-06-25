//WAP to accept 5 numbers from user and display all numbers

#include<iostream>
using namespace std;

int main(){

	int n[5],i;
	
	cout<<"---Enter 5 numbers---"<<endl;
	
	for(i=0;i<5;i++)
	{
		cout<<"Enter number "<< i+1 << ": ";
		cin>>n[i];
	}
	
	cout<<"Given numbers are: ";
	
	for(i=0;i<5;i++)
	{
		cout<<n[i]<<" ";
	}

	return 0;
}

