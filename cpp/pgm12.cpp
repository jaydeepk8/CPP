//to print reverse of a number 
#include<iostream>
using namespace std;
int main()
{
	int n,rev=0,r,a;
	cout <<"Enter a number :";
	cin >>n;
	
	a=n;
	while(n>0)
	{
		r = n%10;
		rev = rev*10+r;
		n = n/10;
	}
	cout <<"\nReverse :"<<rev;
	return 0;
}
