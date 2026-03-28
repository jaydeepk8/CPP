// multilevel inheritance 
#include<iostream>
using namespace std;

class student
{
	int roll;
	char name[20];
	public :
		void get()
		{
			cout <<"Enter roll no and name :";
			cin >>roll;
			cin >>name;
		}
	void put()
	{
		cout <<"\nRoll no :"<<roll;
		cout <<"\nName :"<<name;
	}	
};
class test:public student
{
	public :
	int mk1,mk2;
	
		void accept()
		{
			cout <<"\n\nEnter marks of first and second test :";
			cin >>mk1;
			cin >>mk2;
		}
	void display()
	{
		cout <<"\nMarks of test 1 :"<<mk1;
		cout <<"\nMarks of test 2 :"<<mk2;
	}	
};
class result:public test
{
	int total;
	public :
		void set()
		{
			cout <<"\n\nTotal marks :"<<(mk1+mk2);
		}
};
int main()
{
	result R;
	R.get();
	R.put();
	R.accept();
	R.display();
	R.set();
	
	return 0;
}
