#include<iostream>
using namespace std;

class medicine
{
	char company[20],name[20];
	
	public :
		void get()
		{
			cout <<"Enter Medicine name :";
			cin >>name;
			cout <<"\nEnter Company name :";
			cin >>company;
		}
		void put()
		{
			cout <<"\nMedicine name :"<<name;
			cout <<"\nCompany name :"<<company;
		}
};
class dealer : public medicine
{
	char prod_name[20];
	int price;
	public :
		void take()
		{
			cout <<"\n\nEnter Product name :";
			cin >>prod_name;
			cout <<"\nEnter price of product :";
			cin >>price;
		}
		void give()
		{
			cout <<"\nProduct name :"<<prod_name;
			cout <<"\nPrice of product :"<<price;
		}
};
class retailer : public dealer
{
	int sell_price;
	public :
		void accept()
		{
			cout <<"\n\nEnter selling price :";
			cin >>sell_price;
		}
		void display()
		{
			cout <<"\nSelling price :"<<sell_price;
		}
};
int main()
{
	retailer r;
	r.get();
	r.put();
	r.take();
	r.give();
	r.accept();
	r.display();
	
	return 0;
}
