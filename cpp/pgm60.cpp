// hierarchical inheritance
#include<iostream>
using namespace std;

class staff
{
	char staff_code[10];
	public :
		void get()
		{
			cout <<"Enter staff code :";
			cin >>staff_code;
		}
		void put()
		{
			cout <<"\nStaff code :"<<staff_code;
		}
};
class teacher:public staff
{
	char subject[20];
	public :
		void take()
		{
			cout <<"\n\nEnter subject name :";
			cin >>subject;
		}
		void give()
		{
			cout <<"\nSubject name :"<<subject;
		}
};
class officer:public staff
{
    char grade;
	public : 
	void accept()
	{
		cout <<"\n\nEnter grade :";
		cin >>grade;
	}
	void display()
	{
		cout <<"\nGrade :"<<grade;
	}
};
int main()
{
	teacher t;
	officer o;
	t.get();
	t.put();
	t.take();
	t.give();
	o.accept();
	o.display();
	
	return 0;
}
