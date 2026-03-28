// to find LCM [Least Common Multiple]
#include<iostream>
using namespace std;

void lcm(int,int);

int main()
{
	int a,b;
	cout <<"Enter two numbers :";
	cin>>a>>b;
	
	lcm (a,b);
	
}
void lcm (int a, int b)
{
	int m,n;
	
	m = a;
	n = b;
	
	while (m!=n)
	{
		if (m<n)
		{
			m = m+a;
		}
		else 
		{
			n = n+b;
		}
	}
	cout <<"\nLCM of"<<a<<"and"<<b<<"is"<<m;
}
