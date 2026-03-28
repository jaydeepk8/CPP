// exchange values of two variables using pointers
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	int *p,*q,*r;
	
	p = &a;
	q = &b;
	r = &c;
	
	cout <<"Enter two numbers :";
	cin >>*p>>*q;
	
	cout <<"\nBefore swapping -- \na:"<<*p<<"\nb:"<<*q;
	
	*r = *p;
	*p = *q;
	*q = *r;
	
	cout <<"\nAfter swapping -- \na:"<<*p<<"\nb:"<<*q;
	
	return 0;
}
