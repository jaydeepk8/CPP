//sum of even numbers 
#include<iostream>
using namespace std;
int main ()
{
	int a,n,sum=0;
	cout <<"Enter number :";
	cin >>n;
	
	for (a=2;a<=n;a+=2)
	{
		sum += a;
	}
	cout <<"\nSum is :"<<sum;
	return 0;
}
