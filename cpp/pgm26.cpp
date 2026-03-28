// class - book 
#include<iostream>
using namespace std;

class book
{
	public :
	char name[20];
	int price,pages;
	void accept();
	void display();
};

void book ::  accept()
{
	cout <<"Enter Book name :";
	cin >>name;
	cout <<"\nEnter number of pages :";
	cin >>pages;
	cout <<"\nEnter cost :";
	cin >>price;
}

void book :: display()
{
	cout <<"\nBook name :"<<name;
	cout <<"\nNumber of pages :"<<pages;
	cout <<"\nCost :"<<price;
}

int main()
{
	book b1,b2;
	
	b1.accept();
	b2.accept();
	
	if(b1.price>b2.price)
	{
		cout <<b1.name<<"\nHas highest price as :"<<b1.price;
	}
	
	else 
	{
		cout <<b2.name<<"\nHas highest price as :"<<b2.price;
	}
	return 0;
}
