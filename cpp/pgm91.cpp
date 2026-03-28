// Polymorphism - operator overloading - unary 
#include<iostream>
using namespace std;
class arithmatic
{
	int x,y,z;
	public :
		void get(int a,int b,int c);
		void show();
		void operator - ();       //overloaded minus operator //overloaded through member function so no arguments
};
void arithmatic::get(int a,int b,int c)
{
	x = a;
	y = b;
	z = c;
}
void arithmatic::show()
{
	cout <<x<<" ";
	cout <<y<<" ";
	cout <<z<<" ";
}
void arithmatic::operator -()
{
	x = -x;
	y = -y;
	z = -z;
}
int main()
{
	arithmatic a;
	a.get(15,-20,50);
	
	cout <<"\nBefore Overloading :";
	a.show();
	-a;              // for activating overloaded minus operator
	
	cout <<"\nAfter Overloading :";
	a.show();
	return 0;
}



