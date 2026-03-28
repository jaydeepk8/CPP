// class - addition of two integers
#include<iostream>
using namespace std;

class addition
{
	private :
		int n1,n2,result;
	public :
		void add()
		{
			cout <<"Enter two numbers :";
			cin >>n1>>n2;
		}
		
		void sum()
		{
			result = n1+n2;
		}
		
		void display()
		{
			cout <<"\nSum is :"<<result;
		}
};

int main()
{
	addition a1,a2;
	cout <<"\nObject 1 :";
	a1.add();
	a1.sum();
	a1.display();
	
	cout <<"\nObject 2 :";
	a2.add();
	a2.sum();
	a2.display();
	
	return 0;
}
