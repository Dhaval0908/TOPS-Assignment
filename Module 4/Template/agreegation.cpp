//agreegation is used to link two or more classes

#include<iostream>

using namespace std;

class student
{
	
	public:
		
		int id;
		string name;
		
	public:
		student(int id1 , string name1)
		{
			id = id1;
			name = name1;
		}
};

class result 
{
	float pr;
	student *ref;
	public:
		result (float pr1 , student *ref1)
		{
			pr = pr1;
			ref =  ref1;
		}
		void display()
		{
			cout<<"id is "<<ref->id<<" name is "<<ref->name<<" percentage is "<<pr;
		}
};

int main()
{
	student stu(111 , "dhaval");
	
	result res (77.45 , &stu);
	
	res.display();
}
