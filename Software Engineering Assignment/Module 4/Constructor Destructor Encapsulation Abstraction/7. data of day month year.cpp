//Write a C++ program to implement a class called Date that has private
//member variables for day, month, and year. Include member functions to
//set and get these variables, as well as to validate if the date is valid.

#include<iostream>
using namespace std;
class Data{
	int date;
	string month;
	int year;
	
	public:
		
	Data(){
		cout<<"Enter date: ";
		cin>>date;
		
		if(date > 31){
			cout<<"Invalid Date!!";
		}else{
			cout<<"Enter month: ";
			cin>>month;
		}
			
			
			if(month == ("feb") && (date>29)){
				cout<<"Invalid Date!!";
			}else{
				cout<<"Enter Year: ";
		     	cin>>year;
		     	cout<<date<<"-"<<month<<"-"<<year;
			}
			
			
		};
		
		
	};
		
		
int main(){
	
		Data obj;
}
