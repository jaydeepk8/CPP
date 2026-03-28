#include<iostream>
using namespace std;

class student
{
	char name[20];
	int roll;
	public :
		void get()
		{
			cout <<"Enter student name :";
			cin >>name;
			cout <<"\nEnter student roll no :";
			cin >>roll;
		}
		void put()
		{
			cout <<"\nStudent name :"<<name;
			cout <<"\nStudent roll no :"<<roll;
		}
};
class test : public student
{
	public :
	int mk1,mk2;
	
		void input()
		{
			cout <<"\n\nEnter marks 1 :";
			cin >>mk1;
			cout <<"\nEnter marks 2 :";
			cin >>mk2;
		}
		void output()
		{
			cout <<"\nMarks 1 :"<<mk1;
			cout <<"\nMarks 2 :"<<mk2;
		}
};
class result : public test
{
	
	public :
		void display()
		{
			cout <<"\n\nResult :"<<mk1+mk2;
		}
};
int main()
{
	result r;
	r.get();
	r.put();
	r.input();
	r.output();
	r.display();
	
	return 0;
}
