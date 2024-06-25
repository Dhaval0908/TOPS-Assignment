//template is derived datatype

#include<iostream>
using namespace std;

template <typename T>
void maximum(T x,T y)
{
	if(x > y)
	{
		cout<<"value 1 is big";
	}
	else
	{
		cout<<"value 2 is big";
	}
}

int main(){

	maximum<int>(5,6);
	cout<<endl;
	maximum<float>(5.5,5.1);
	cout<<endl;
	maximum<char>('A','K');

	return 0;
}

