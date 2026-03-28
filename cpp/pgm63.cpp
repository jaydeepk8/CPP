//print value and address of a number using pointer
#include<iostream>
using namespace std;
int main()
{
	int n,x,*p;
	p = &n;
	
	cout <<"Enter a number :";
	cin >>n;
	
	cout <<"\nAddress is :"<<p;
	
	return 0;
}
