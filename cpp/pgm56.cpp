// multiple inheritance
#include<iostream>
using namespace std;

class magazine
{
	public :
		int Mprice;
		char name[20], dur[30];
		
		void get()
		{
			cout <<"Enter magazine name, price and duration :";
			cin >>name;
			cin >>Mprice;
			cin >>dur;
		}
		void put()
		{
			cout <<"\nMagazine name :"<<name;
			cout <<"\nMagazine price :"<<Mprice;
			cout <<"\nMagazine duration :"<<dur;
		}
};
class newspaper 
{
	public :
		int Nprice;
		char name[20],dur[30];
		
		void take()
		{
			cout <<"\n\nEnter newspaper name, price and duration :";
			cin >>name;
			cin >>Nprice;
			cin >>dur;
		}
		void give()
		{
			cout <<"\nNewspaper name :"<<name;
			cout <<"\nPrice :"<<Nprice;
			cout <<"\nDuration :"<<dur;
		}
};
class journal
{
	public :
		int Jprice;
		char name[20], dur[30];
		
		void accept()
		{
			cout <<"\n\nEnter Journal name, price and duration :";
			cin >>name;
			cin >>Jprice;
			cin >>dur;
		}
		void display()
		{
			cout <<"\nJournal name :"<<name;
			cout <<"\nPrice :"<<Jprice;
			cout <<"\nDuration :"<<dur;
		}
};
class periodical : public magazine, public newspaper, public journal
{
	public :
		void make()
		{
			cout <<"\n\nFrom periodical :";
		}
};
int main()
{
	periodical p;
	p.get();
	p.put();
	p.take();
	p.give();
	p.accept();
	p.display();
	p.make();
	
	return 0;
}
