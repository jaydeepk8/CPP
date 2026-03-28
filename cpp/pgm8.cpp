#include<iostream>
using namespace std;
int main()
{
	int a,b,c,sum;
	float avg;
	cout <<"enter 3 numbers :";
	cin >>a>>b>>c;
	
	sum = a+b+c;
	avg = sum/3;
	
	cout <<"\nSum :" <<sum;
	cout <<"\nAverage :" <<avg;
	
	return 0;
}
