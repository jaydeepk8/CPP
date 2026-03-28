#include<iostream>
using namespace std;

class CEO_info
{
	char name[20],gender[10];
	int age;
	public :
		void get()
		{
		cout <<"Enter Name of CEO :";
		cin>>name;
		cout <<"\nEnter gender of CEO :";
		cin >>gender;
		cout <<"\nEnter age of CEO :";
		cin >>age;
	    }
	    void put()
	    {
	    	cout <<"\n\nCEO name :"<<name;
	    	cout <<"\nCEO gender :"<<gender;
	    	cout <<"\nCEO age :"<<age;
		}
};
class employee_info
{
	int no;
	public :
		void take()
		{
			cout <<"\n\nEnter number of employees in the company :";
			cin >>no;
		}
		void give()
		{
			cout <<"\nNumber of employees in company :"<<no;
		}
};
class company:public CEO_info, public employee_info
{
	char comp_name[20];
	char networth[20];
	char founded[20];
	char hq[20];
	public :
		void accept()
		{
			cout <<"\n\nEnter company name :";
			cin >>comp_name;
			cout <<"\nEnter Networth of company :";
			cin >>networth;
			cout <<"\nEnter founded date :";
			cin >>founded;
			cout <<"\nEnter company Headquarter :";
			cin >>hq;
		}
		void display()
		{
			cout <<"\nCompany name :"<<comp_name;
			cout <<"\nCompany networth :"<<networth;
			cout <<"\nCompany founded :"<<founded;
			cout <<"\nCompany Headquarter :"<<hq;
		}
};
int main()
{
	company c;
	c.get();
	c.put();
	c.take();
	c.give();
	c.accept();
	c.display();
	
	return 0;
}
