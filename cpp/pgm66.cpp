// pointers in arrays
#include<iostream>
using namespace std;
int main()
{
	int arr1[5],*p,i,j;
	p = &arr1[0];
	
	cout <<"Enter 5 numbers :";
	for(i=0;i<5;i++)
	{
		cin>>*p;
		p++;
	}
	p = &arr1[0];
	cout <<"\nArray elements :";
	for(j=0;j<5;j++)
	{
		cout <<*p<<"\n";
		p++;
	}
	return 0;
}
