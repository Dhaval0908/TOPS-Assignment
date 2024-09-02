//Write a program of to swap the two values using template
#include <iostream>
using namespace std; 

template <typename T> 
int swap_numbers(T& x, T& y) 
{ 
	T temp; 
	temp = x; 
	x = y; 
	y = temp; 
	return 0; 
} 

int main() 
{ 
	int a, b; 
//	a = 10, b = 20; 
	cout<<"Enter value of a = ";
	cin>>a;
	cout<<"Enter value of b = ";
	cin>>b;

	cout<<"----- After Swap Values of a and b -----"<<endl;
	swap_numbers(a, b); 
	cout << "a = " << a << " " << "b = " << b << endl; 
	return 0; 
}

