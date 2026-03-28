// multiple inheritance
#include<iostream>
using namespace std;

class employee
{
	int id;
	char name[20];
	public :
		void get()
		{
			cout <<"Enter name and id :";
			cin >>name;
			cin >>id;
		}
	void put()
	{
		cout <<"\nName :"<<name;
		cout <<"\nid :"<<id;
	}	
}; 
class emp_union
{
	public:
	int memID;

		void take()
		{
			cout <<"\n\nEnter Member id :";
			cin >>memID;
		}
	void give()
	{
		cout <<"\nMember id :"<<memID;
	}	
};
class emp_info : public employee, public emp_union
{
	public :
		int sal;
		void accept()
		{
			cout <<"\n\nEnter salary :";
			cin >>sal;
		}
	void display()
	{
		cout <<"\nSalary :"<<sal;
	}
};
int main()
{
	emp_info ei;
	ei.get();
	ei.put();
	ei.take();
	ei.give();
	ei.accept();
	ei.display();
	
	return 0;
}
