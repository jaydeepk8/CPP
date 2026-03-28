// class - friend function
#include<iostream>
using namespace std;

class calculation
{
	int a,b;
	friend int add(calculation c)
	{
		return (c.a + c.b);
	}
	friend int sub(calculation);
	public :
		friend int multi(calculation c)
		{
			return(c.a*c.b);
		}
		friend float div(calculation);
		void set();
		
int sub(calculation c)
{
	return (c.a-c.b);
}
float div(calculation c)
{
	return (c.a/c.b);
}
};
int calculation :: set()
{
	a = 55, b = 22;
}
int main()
{
	calculation cal;
	cal.set();
	cout <<"Addition :"<<add(cal);
	cout <<"\nSubstraction :"<<sub(cal);
	cout <<"\nMultiplication :"<<multi(cal);
	cout <<"\ndivision :"<<div(cal);
	
	return 0;
}

