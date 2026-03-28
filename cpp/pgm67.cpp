#include<iostream>
using namespace std;
int main()
{
	int arr[5],sum,i,j;
	int *p;
	p = &arr[0];
	
	cout <<"Enter five numbers :";
	for(i=0;i<5;i++)
	{
		cin>>*p;
		p++;
	}
	p =&arr[0];
    for (j=0;j<5;j++)
    {
    	sum = sum + *p;
    	p++;
	}
	cout <<"\nSum :"<<sum;
	
	return 0;
	
}
