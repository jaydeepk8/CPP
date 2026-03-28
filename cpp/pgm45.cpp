#include<iostream>
using namespace std;

class fraction
{
	int n,d,i;
	
	public:
		fraction(int a, int b);
		void display();
};
fraction :: fraction(int a, int b)
{
	n = a;
	d = b;
}
void fraction :: display()
{
	i = n/d;
	cout <<"Fraction :"<<i;
}
int main()
{
	fraction F(5,6);
	F.display();
	
	return 0;
}
