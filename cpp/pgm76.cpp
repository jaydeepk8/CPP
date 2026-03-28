#include<iostream>
using namespace std;

class sum
{
	int n, s;
	public :
		void calc();
		void display();
};
void sum::calc()
{
	for(n=1;n<=100;n++)
	{
		s = s+n;
	}
}
void sum::display()
{
	cout <<"Sum of all odd numbers between 1 to 100 :"<<s;
}
int main()
{
	sum s;
	s.calc();
	s.display();
	
	return 0;
}
