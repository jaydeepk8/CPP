// Armstrong number 
#include<iostream>
using namespace std;
int main()
{
	int arm=0,a,b,c,d,no;
	
	cout <<"Enter number :";
	cin >>no;
	
	d = no;
	
	while(no>0)
	{
		a = no%10;
		no = no/10;
		arm = arm + a*a*a;
	}
	if (arm==d)
	{
		cout <<"\nIts Armstrong";
	}
	else
	{
		cout <<"\nNot Armstrong";
	}
	return 0;
}
