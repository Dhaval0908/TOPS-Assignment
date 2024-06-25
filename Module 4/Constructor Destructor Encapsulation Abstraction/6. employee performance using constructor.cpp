//Write a C++ program to implement a class called Employee that has
//private member variables for name, employee ID, and salary. Include
//member functions to calculate and set salary based on employee
//performance. Using of constructor

#include<iostream>
using namespace std;
class Employee{
	string name;
	int id;
	int salary;
	int choice;
	
	public:
	
	Employee(){
		cout<<"Enter employee name: ";
		cin>>name;
		
		cout<<"Enter employee id: ";
		cin>>id;
		
		cout<<"\n---------Choose employee performance----------\n";
		cout<<"\n1.Very good perfomance \n2.good perfomance \n3.average perfomance \n4.bad perfomance\n\n";
		
		cout<<"Enter choice for employee performance: ";
		cin>>choice;
		
		switch(choice){
			case 1:
				cout<<"\nVery Good perfomance\n";
				salary = 60000;
				cout<<"The salary was INR "<<salary<<"/-";
				break;
			case 2:
				cout<<"\nGood perfomance\n";
				salary = 45000;
				cout<<"The salary was INR "<<salary<<"/-";
				break;
			case 3:
				cout<<"\nAverage perfomance\n";
				salary = 30000;
				cout<<"The salary was INR "<<salary<<"/-";
				break;
			case 4:
				cout<<"\nBad perfomance\n";
				salary = 10000;
				cout<<"The salary was INR "<<salary<<"/-";
				break;
			default:
				cout<<"\nInvalid choice";
		}
	}
};


int main(){
	Employee obj;
}
