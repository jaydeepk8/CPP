// class - calculator 
#include<iostream>
#include<math.h>
using namespace std;

class calculator
{
	double A,B;
	
	public :
		void get()
		{
			cout <<"Enter first number :";
			cin >>A;
			cout <<"\nEnter second number :";
			cin >>B;
		}
		double add()
		{
			return A+B;
		}
		double sub()
		{
			return A-B;
		}
		double multi()
		{
			return A*B;
		}
		double div()
		{
			if (B==0)
			{
				cout <<"\nDivision by zero"<<endl;
				return INFINITY;
			}
			else
			{
				return A/B;
			}
		}
};

int main()
{
	int choice;
	calculator cal;
	
	cout <<"\nEnter 1 to add two numbers";
	cout <<"\nEnter 2 to subtract two numbers";
	cout <<"\nEnter 3 to multiply two numbers";
	cout <<"\nEnter 4 to divide two numbers";
	cout <<"\nEnter 0 to exit";
	
	do
	{
		cout <<"\n\nEnter choise :";
		cin >>choice;
		
		switch(choice)
		{
			case 1:
				cal.get();
				cout <<"\nResult :"<<cal.add()<<endl;
				break;
			
			case 2:
			cal.get();
			cout <<"\nResult :"<<cal.sub()<<endl;
			break;
			
			case 3:
			cal.get();
			cout <<"\nResult :"<<cal.multi()<<endl;
			break;
			
			case 4:
			cal.get();
			cout <<"\nResult :"<<cal.div()<<endl;
			break;	
		}
	}while (choice>=1 && choice<=4);
	return 0;
	
}
