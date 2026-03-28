// class - employee 
#include<iostream>
using namespace std;

class employee
{
	int id,salary;
	char desg[20];
	
	public :
		void accept()
		{
			cout <<"Enter Employee ID, Designation and Salary :";
			cin >>id>>desg>>salary;
		}
		
		void dispaly()
		{
			cout <<"\nID :"<<id;
			cout <<"\nDesignation :"<<desg;
			cout <<"\nSalary :"<<salary;
		}
};

int main()
{
	employee e;
	
	e.accept();
	e.dispaly();
	
	return 0;
}
