#include<iostream>
using namespace std;

class student
{
	char name[20];
	int age,roll;
	
	public :
		void get()
		{
			cout <<"\nEnter student name :";
			cin >>name;
			cout <<"\nEnter student roll no :";
			cin >>roll;
			cout <<"\nEnter student age :";
			cin >>age;
		}
		void put()
		{
			cout <<"\nStudent name :"<<name;
			cout <<"\nStudent roll no :"<<roll;
			cout <<"\nStudent age :"<<age;
		}
};
class arts:public student
{
	char asub1[20],asub2[20];
	
	public :
		void take()
		{
			cout <<"\n\nArts students details";
			cout <<"\nEnter subject 1 :";
			cin >>asub1;
			cout <<"\nEnter subject 2 :";
			cin >>asub2;
		}
 	    void give()
 	    {
 	    	cout <<"\nSubject 1 :"<<asub1;
 	    	cout <<"\nSubject 2 :"<<asub2;
		}
};
class science:public student
{
	char ssub1[20],ssub2[20];
	public :
		void accept()
		{
			cout <<"\n\nScience students details";
			cout <<"\nEnter subject 1 :";
			cin >>ssub1;
			cout <<"\nEnter subject 2 :";
			cin >>ssub2;
		}
		void display()
		{
			cout <<"\nSubject 1 :"<<ssub1;
			cout <<"\nSubject 2 :"<<ssub2;
		}
};
int main()
{
	arts a;
	cout <<"\n\nDetails of Arts student :";
	a.get();
	a.put();
	a.take();
	a.give();
	
	science s;
	cout <<"\n\nDetails of Science students :";
	s.get();
	s.put();
	s.accept();
	s.display();
	
	return 0;
}
