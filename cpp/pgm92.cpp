//Polymorphism - operator overloading - unary
#include<iostream>
using namespace std;
class fibbo
{
	int a1,a2,a3;
	public :
		fibbo()
		{
			a1 = 0;
			a2 = 1;
			a3 = a1+a2;
		}
		void operator ++()
		{
			a1 = a2;
			a2 = a3;
			a3 = a1+a2;
		}
		void display()
		{
			cout <<a3<<"\t";
		}
};
int main()
{
	fibbo f;
	int n,i;
	cout <<"Enter how many number is to be use :";
	cin >>n;
	
	for(i=0;i<n;i++)
	{
		f.display();
		++f;
	}
	return 0;
}
