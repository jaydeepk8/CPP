// hierarchical inheritance 
#include<iostream>
using namespace std;

class employee
{
	int id;
	char name[20];
	
	public:
		void get()
		{
			cout <<"Enter name and id :";
			cin >>name;
			cin >>id;
		}
		void put()
		{
			cout <<"\nName :"<<name;
			cout <<"\nID :"<<id;
		}
};
class worker : public employee
{
	public :
		int salary;
		void take()
		{
			cout <<"\n\nEnter salary :";
			cin >>salary;
		}
		void give()
		{
			cout <<"\nSalary :"<<salary;
		}
};
class manager : public employee
{
	int allow;
	public :
		void accept()
		{
			cout <<"\n\nEnter manager allowance :";
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
