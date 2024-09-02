//Get some words from user and print that 100 times

#include<iostream>
using namespace std;

int main(){

	string words;
	int i;
	
	cout<<"Enter something: ";
	cin>>words;
	
	for(i=1;i<=100;i++)
	{
		cout<<words<<"\t";
	}

	return 0;
}

