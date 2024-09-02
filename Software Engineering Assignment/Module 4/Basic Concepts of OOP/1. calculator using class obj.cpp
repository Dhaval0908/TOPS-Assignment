//WAP to create simple calculator using class

#include<iostream>
using namespace std;

class calculator{
	int a,b;
	
public:
	void get(){
		cout<<"Enter value of a: ";
		cin>>a;
		cout<<"Enter value of b: ";
		cin>>b;
	}
	
	void add()
	{
		cout<<a+b;
	}
	
	void sub()
	{
		cout<<a-b;
	}
	
	void mul()
	{
		cout<<a*b;
	}
	
	void div()
	{
		if(b!=0)
		{
		cout<<a/b;
		}
		else
		{
		cout<<"Invalid value";
		}
	}
	
};
int main(){

	calculator c1;
	char choice;
	
	cout<<"Enter choice of operator(+ , - , * , /): ";
	cin>>choice;
	
	switch(choice)
	{
		case '+':
			c1.get();
			c1.add();
			break;
		case '-':
			c1.get();
			c1.sub();
			break;
		case '*':
			c1.get();
			c1.mul();
			break;
		case '/':
			c1.get();
			c1.div();
			break;
		default:
			cout<<"Invalid Operator";
		}
	}
	

