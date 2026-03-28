#include<iostream>
using namespace std;
class employee
{
	char name[20];
	int id;
	public :
		void getdata()
		{
			cout <<"Enter name :";
			cin >>name;
			cout <<"\nEnter ID :";
			cin >>id;
		}
		void showdata()
		{
			cout <<"\nName :"<<name;
			cout <<"\nID :"<<id;
		}
};
class perks : public employee
{
	public :
	int bs;
	    void getp()
		{
			cout <<"\n\nEnter basic salary :";
			cin >>bs;
		}
		void showp()
		{
			cout <<"\nBasic salary :"<<bs;
		}
};
class salary : public perks
{
	int gs;
	public :
		void clas()
		{
			gs = bs+0.5*bs+0.6*bs;
		}
		void shows()
		{
			cout <<"\n\nGS :"<<gs;
		}
};
int main()
{
	salary s;
	s.getdata();
	s.showdata();
	s.getp();
	s.showp();
	s.clas();
	s.shows();
	
	return 0;
}
