#include<iostream>
using namespace std;

class customer
{
	int phno;
	char name[20];
	public:
		void get()
		{
			cout <<"Enter name and phone number :";
			cin >>name;
			cin >>phno;
		}
	void set()
	{
		cout <<"\nCustomer name :"<<name;
		cout <<"\nCustomer phone no :"<<phno;
	}	
};
class depositor:public customer
{
	int acc_no,balance;
	public :
		void take()
		{
			cout <<"\n\nEnter account no and balance :";
			cin >>acc_no;
			cin >>balance;
		}
	void put()
	{
		cout <<"\nAccount no. :"<<acc_no;
		cout <<"\nBalance :"<<balance;
	}	
};
class borrower:public depositor
{
	int loan_no,loan_amt;
	public :
		void accept()
		{
			cout <<"\n\nEnter loan no and loan amount :";
			cin >>loan_no;
			cin >>loan_amt;
		}
	void display()
	{
		cout <<"\nLoan no :"<<loan_no;
		cout <<"\nLoan amount :"<<loan_amt;
	}	
};
int main()
{
	borrower b;
	b.get();
	b.set();
	b.take();
	b.put();
	b.accept();
	b.display();
	return 0;
}
