#include<iostream>
using namespace std;
int main()
{
	int n1,n2,*p1,*p2;
	p1 = &n1;
	p2 = &n2;
	
	cout <<"Enter two numbers :";
	cin >>n1>>n2;
	
	cout <<"\n\nAddition :"<<*p1+*p2;
	cout <<"\nSubtraction :"<<*p1-*p2;
	cout <<"\nMultiplication :"<<*p1 * *p2;
	cout <<"\nDivision :"<<*p1 / *p2;
	
	return 0;
}
