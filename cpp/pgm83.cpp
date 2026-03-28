#include<iostream>
using namespace std;

class employee
{
	int id;
	char name[20];
	
	public :
		void get()
		{
			cout <<"Enter employee ID :";
			cin >>id;
			cout <<"\nEnter employee name :";
			cin >>name;
		}
		void put()
		{
			cout <<"\nEmployee ID :"<<id;
			cout <<"\nEmployee name :"<<name;
		}
};
class worker:public employee
{
	int salary;
	public :
		void take()
		{
			cout <<"\nEnter worker salary :";
			cin >>salary;
		}
		void give()
		{
			cout <<"\nWorker salary :"<<salary;
		}
};
class manager : public employee
{
	int allow;
	public :
		void accept()
		{
			cout <<"\nEnter manager allowance :";
			cin >>allow;
		}
		void display()
		{
			cout <<"\nManager allowance :"<<allow;
		}
};
int main()
{
	worker w;
	manager m;
	w.get();
	w.put();
	w.take();
	w.give();
	m.accept();
	m.display();
	
	return 0;
}
