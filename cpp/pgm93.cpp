//Polymorphism - operator overloading - unary
#include<iostream>
using namespace std;
class number
{
	int n;
	public :
		void accept(int x)
		{
			n = x;
		}
		void display()
		{
			cout <<"\nYour value is :"<<n;
		}
		void operator !()
		{
			n = !n;
		}
};
int main()
{
	number num;
	num.accept(50);
	cout <<"\nBefore operator overloading :";
	num.display();
	!num;
	
	cout<<"\nAfter operator overloading :";
	num.display();
	return 0;
}
