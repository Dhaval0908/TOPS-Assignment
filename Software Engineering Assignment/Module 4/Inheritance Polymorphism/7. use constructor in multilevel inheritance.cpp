//Write a C++ Program to illustrates the use of Constructors in multilevel
//inheritance

#include<iostream>
using namespace std;	
class a{
	protected:
	string name;
	public:
		
		a(){
			
		};
};

class b:public a{
	protected:
	int age;
		public:
			b(){
				
			};
};

class c:public b{
	
	public:
		c(){
		
		cout<<"Enter Your Name: ";
		cin>>name;
		
		cout<<"Enter your Age: ";
		cin>>age;
		
		cout<<"Your Name is: "<<name<<endl;
		
		cout<<"Your Age is: "<<age;
		};
};

int main(){
	c obj;
}
