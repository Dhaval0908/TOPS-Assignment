//Write a C++ Program to find Area of Rectangle using inheritance

#include<iostream>
using namespace std;
class ractangle{
	protected:
		float l,w;
		int calc;
};

class area:public ractangle{
	
	public:
		
		void get(){
			cout<<"Enter the length of rectangle: ";
			cin>>l;
			
			cout<<"Enter the width of rectangle: ";
			cin>>w;
		}
		
		void calculation(){
			calc = l*w;
			
			cout<<"The area of Rectangle is: "<<calc;
		}
	
};

int main(){
	area obj;
	
	obj.get();
	obj.calculation();
}
