#include<iostream>
using namespace std;
class large
{
	int x,y,z;
	public:
		void accept()
		{
			cout <<"Enter first number :";
			cin >>x;
			cout <<"\nEnter second number :";
			cin >>y;
			cout <<"\nEnter third number :";
			cin >>z;
		}
		void display()
		{
			if(x>y && x>z)
			{
				cout <<"\nLargest :"<<x;
			}
			if(y>x && y>z)
			{
				cout <<"\nLargest :"<<y;
			}
			if(z>x && z>y)
			{
				cout <<"\nLargest :"<<z;
			}
		}
};
int main()
{
	large l;
	l.accept();
	l.display();
	
	return 0;
}
