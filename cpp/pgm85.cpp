#include<iostream>
using namespace std;

class student
{
	int roll;
	char name[20];
	char add[20];
	char city[20];
	
	public :
		void get()
		{
			cout <<"Enter student roll no :";
			cin >>roll;
			cout <<"\nEnter student name :";
			cin >>name;
			cout <<"\nEnter student address :";
			cin >>add;
			cout <<"\nEnter student city :";
			cin >>city;
		}
		void put()
		{
			cout <<"\nStudent roll no :"<<roll;
			cout <<"\nStudent name :"<<name;
			cout <<"\nStudent address :"<<add;
			cout <<"\nStudent city :"<<city;
		}
};
class marks : public student
{
	int s1,s2;
	float per;
	
	public :
		void take()
		{
			cout <<"\n\nEnter mark 1 :";
			cin >>s1;
			cout <<"\nEnter mark 2 :";
			cin >>s2;
			
		}
		void give()
		{
			cout <<"\nMarks 1 :"<<s1;
			cout <<"\nMarks 2 :"<<s2;
			
		}
		void calc()
		{
			per = (s1+s2)/3;
			cout <<"\nPercentage :"<<per;
		}
};
int main()
{
	marks m;
	int ch;
	int count = 0;
	
	do
	{
		cout <<"\n\n1. input data";
		cout <<"\n2. output data";
		cout <<"\n3. calculate percentage";
		cout <<"\n4.exit";
		cout <<"\nEnter the choice :";
		cin >>ch;
		
		switch (ch)
		{
			case 1 :
				m.take();
				count ++;
				break;
				
			case 2 :
			    m.give();
			    break;
			
			case 3 :
				m.calc();
				break;
		}
	}while (ch!=4);
	return 0;
}
