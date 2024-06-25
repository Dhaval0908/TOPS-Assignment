//Assume that the test results of a batch of students are stored in three different
//classes. Class Students are storing the roll number. Class Test stores the
//marks obtained in two subjects and class result contains the total marks
//obtained in the test. The class result can inherit the details of the marks
//obtained in the test and roll number of students. (Multilevel Inheritance)


#include<iostream>
using namespace std;
class students{
	protected:
		int roll_no;
	public:
		
		void roll_stud(){
			cout<<"Enter Your Roll No : ";
			cin>>roll_no;
		}
};

class test:public students{
	protected:
		int sci,maths;
	public:
		void test_marks(){
			cout<<"Enter Your science Marks : ";
			cin>>sci;
			
			cout<<"Enter Your maths Marks : ";
			cin>>maths;
		}
	
};

class result:public test{
	protected:
		int total;
	public:
		
		void calc(){
			total = sci+maths;
		}
		void result_mod(){
			cout<<"\nTotal marks of test is: "<<total<<endl;
			cout<<"Roll Number of student is: "<<roll_no<<endl;
		}
};

int main(){
	result main;
	
	main.roll_stud();
	main.test_marks();
	main.calc();
	main.result_mod();
}
