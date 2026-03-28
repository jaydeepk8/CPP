#include<iostream>
using namespace std;
class basic_info
{
	char name[20];
	int id;
	char gender[10];
	public :
		void get()
		{
			cout <<"Enter employee name :";
			cin >>name;
			cout <<"\nEnter employee ID :";
			cin >>id;
			cout <<"\nEnter employee gender :";
			cin >>gender;
		}
		void put()
		{
			cout <<"\nEmployee name :"<<name;
			cout <<"\nEmployee ID :"<<id;
			cout <<"\nEmployee gender :"<<gender;
		}
};
class dept_info
{
	char deptname[20];
	char work[20];
	int time;
	public :
		void take()
		{
			cout <<"\n\nEnter department name :";
			cin >>deptname;
			cout <<"\nEnter work :";
			cin >>work;
			cout <<"\nEnter time limit :";
			cin >>time;
		}
		void give()
		{
			cout <<"\nDepartment name :"<<deptname;
			cout <<"\nWork :"<<work;
			cout <<"\nTime limit :"<<time;
		}
};
class employee:public basic_info, public dept_info
{
	int salary;
	public :
		void accept()
		{
			cout <<"\n\nEnter employee salary :";
			cin >>salary;
		}
		void display()
		{
			cout <<"\nSalary :"<<salary;
		}
};
int main()
{
	employee e;
	e.get();
	e.put();
	e.take();
	e.give();
	e.accept();
	e.display();
	
	return 0;
}
