#include<iostream>
using namespace std;
class customer
{
	public :
	char name[20],addr[50];
	int srno;
		void get()
		{
			cout <<"Enter Customer name :";
			cin.ignore();
			cin.getline(name,20);
			cout <<"\nEnter Customer Address :";
			cin.ignore();
			cin.getline(addr,50);
			cout <<"\nEnter Customer Serial Number :";
			cin >>srno;
		}
		void put()
		{
			cout <<"\nCustomer name :"<<name;
			cout <<"\nCustomer Address :"<<addr;
			cout <<"\nCustomer Serial Number :"<<srno;
		}
};
class item : public customer
{
	public :
	char iname[30];
	int price,ino;
	    void input()
		{
			cout <<"\n\nEnter Order name :";
			cin.ignore();
			cin.getline(iname,30);
			cout <<"\nEnter Order number :";
			cin >>ino;
			cout <<"\nEnter Order price :";
			cin >>price;
		}
		void output()
		{
			cout <<"\nOrder name :"<<iname;
			cout <<"\nOrder number :"<<ino;
			cout <<"\nOrder price :"<<price;
		}
};
class delivery : public item
{
	public :
	char date[10];
	int del_char;
	int pm;
	
		void accept()
		{
			cout <<"\n\nEnter Delivery date :";
			cin >>date;
			cout <<"\nEnter Delivery charges :";
			cin >>del_char;
	    }
		void pmmthd()
		{
			cout <<"\nChoose your payment method ";
			cout <<"\nEnter 1 for UPI/Netbanking";
			cout <<"\nEnter 2 for Debit/Credit card";
			cout <<"\nEnter 3 for Cash on Delivery";
			cout <<"\n\nEnter choice :";
			cin >>pm;
			switch (pm)
			{
				case 1:
					cout <<"\nPayment Method : UPI/Netbanking";
					break;
					
				case 2 :
					cout <<"\nPayment Method : Debit/Credit card";
					break;
					
				case 3 :
					cout <<"\nPayment Method : Cash on Delivery";
					break;
					
				default :
					cout <<"\nEnter valid number from 1 to 3";
			}
		}	
			
		
		void display()
		{
			cout <<"\nDelivery date :"<<date;
			cout <<"\nEnter Delivery charges :"<<del_char;
		}
};
class order_summary : public delivery
{
	public :
		void summary()
		{
			cout <<"\n\n---ORDER SUMMARY---";
			cout <<"\nName :"<<name;
			cout <<"\nAddress :"<<addr;
			cout <<"\nSerial number :"<<srno;
			cout <<"\nOrder name :"<<iname;
			cout <<"\nOrder no. :"<<ino;
			cout <<"\nOrder price :"<<price;
			cout <<"\nDelivery on :"<<date;
			cout <<"\nDelivery charges :"<<del_char;
			cout <<"\nPayment method :"<<pm;
			cout <<"\nYou pay :"<<price+del_char;
		}
};
int main()
{
	order_summary os;
	os.get();
	os.put();
	os.input();
	os.output();
	os.accept();
	os.pmmthd();
	os.display();
	os.summary();
	
	return 0;
}
