// hierarchical inheritance
#include<iostream>
using namespace std;

class student
{
	int roll;
	char name[20];
	public :
		void get()
		{
			cout <<"Enter name and roll no :";
			cin >>name;
			cin >>roll;
		}
		void put()
		{
			cout <<"\nName :"<<name;
			cout <<"\nRoll no :"<<roll;
		}
};
class engg_stud:public student
{
	char sub_name[20];
	public :
		void take()
		{
			cout <<"\n\nEnter subject name:";
			cin >>sub_name;
		}
		void give()
		{
			cout <<"\nSubject name :"<<sub_name;
		}
};
class diploma_stud:public student
{
	int result;
	public :
		void accept()
		{
			cout <<"\n\nEnter result :";
			cin >>result;
		}
		void display()
		{
			cout <<"\nResult :"<<result;
		}
};
int main()
{
	engg_stud es;
	diploma_stud ds;
	
	es.get();
	es.put();
	es.take();
	es.give();
	ds.accept();
	ds.display();
	
	return 0;
}
