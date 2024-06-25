//Assume a class cricketer is declared. Declare a derived class batsman from
//cricketer. Data member of batsman. Total runs, Average runs and best
//performance. Member functions input data, calculate average runs, Display
//data. (Single Inheritance)

#include<iostream>
using namespace std;

class Cricketer{
	
};

class Batsman : public Cricketer{
	
private:
		
	int totalRuns;
	int matches;
	int averageRuns;
	int bestPer;
	
public:
	
	void get(){
		cout<<"-----Fill Matches Info-----"<<endl;
		cout<<"Enter total runs: ";
		cin>>totalRuns;
		cout<<"Enter number of matches played: ";
		cin>>matches;
		cout<<"Enter best performance: ";
		cin>>bestPer;
		calAvgRuns();
	}
	
	void calAvgRuns(){
		if(matches != 0)
		{
			averageRuns = (totalRuns)/matches;
		}
		else
		{
			averageRuns = 0;
		}
	}
	
	void display(){
		cout<<"\n-----Matches Conclusion-----"<<endl;
		cout<<"Total Runs: "<<totalRuns<<endl;
		cout<<"Matches Played: "<<matches<<endl;
		cout<<"Average Runs: "<<averageRuns<<endl;
		cout<<"Best Performance: "<<bestPer<<endl;
	}
};

int main(){

	Batsman b1;
	b1.get();
	b1.display();

	return 0;
}

