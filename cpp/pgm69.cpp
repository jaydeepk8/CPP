#include<iostream>
using namespace std;

class product
{
	char name[10];
	int price;
	
	public :
		void accept()
		{
			cout <<"Enter Name and Price of product :";
			cin>>name;
			cin>>price;
		}
		void display()
		{
			cout <<"\nName :"<<name;
			cout <<"\nPrice :"<<price;
		}
};
int main()
{
	product p, *ptr;
	ptr = &p;
	ptr->accept();
	ptr->display();
	
	return 0;
}
