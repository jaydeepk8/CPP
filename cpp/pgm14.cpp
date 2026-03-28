// find largest of three numbers 
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout <<"Enter three numbers :";
	cin >>a>>b>>c;
	
	if(a>b&&a>c)
	{
		cout <<"\nLargest no :"<<a;
	}
	if(b>a&&b>c)
	{
		cout <<"\nLargest no :"<<b;
	}
	if(c>a&&c>b)
	{
		cout <<"\nLargest no :"<<c;
	}
	return 0;
}
