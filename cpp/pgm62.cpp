// virtual base class
#include<iostream>
using namespace std;

class student
{
    public :
    	int roll;
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
class test : virtual public student
{
	public :
		int mk1,mk2;
		void take()
		{
			cout <<"\nEnter marks of test 1 :";
			cin >>mk1;
			cout <<"\nEnter marks of test 2 :";
			cin >>mk2;
		}
		void give()
		{
			cout <<"\nTest 1 marks :"<<mk1;
			cout <<"\nTest 2 marks :"<<mk2;
		}
};
class sport : virtual public student
{
	public :
		int score;
		void accept()
		{
		cout <<"\nEnter sport score :";
		cin >>score;
	    }
	    void display()
	    {
	    	cout <<"\nSport score :"<<score;
		}
};
class result : public test, public sport
{
	public :
		int total;
		void make()
		{
			cout <<"\nResult :"<<mk1+mk2+score;
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
