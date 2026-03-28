// hybrid inheritance
#include<iostream>
using namespace std;

class student
{
	int roll;
	public :
		void get()
		{
			cout <<"Enter roll no :";
			cin >>roll;
		}
		void put()
		{
			cout <<"\nRoll no :"<<roll;
		}
};
class test : public student
{
	public :
		int pt1, pt2;
		void take()
		{
			cout <<"\n\nEnter test 1 and test 2 marks :";
			cin >>pt1;
			cin >>pt2;
		}
		void give()
		{
			cout <<"\nTest 1 :"<<pt1;
			cout <<"\nTest 2 :"<<pt2;
		}
};
class sports 
{
	public :
		int score;
		void accept ()
		{
			cout <<"\n\nEnter score of sport :";
			cin >>score;
		}
		void display()
		{
			cout <<"\nScore :"<<score;
		}
};
class result : public test, public sports
{
	int total;
	public :
		void make()
		{
			total = pt1 + pt2 + score;
			cout <<"\n\nResult :"<<total;
	    }
};
int main()
{
	result r;
	r.get();
	r.put();
	r.take();
	r.give();
	r.accept();
	r.display();
	r.make();
	
	return 0;	
}
