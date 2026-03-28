#include<iostream>
using namespace std;
int main()
{
	int arr[5],n,count,*p,i,j;
	p = &arr[0];
	
	cout <<"Enter five numbers :";
	for(i=0;i<5;i++)
	{
		cin >>*p;
		p++;
	}
	p = &arr[0];
	cout <<"\nEnter element to be search :";
	cin >>n;
	
	for(j=0;j<5;j++)
	{
		if(*p==n)
		count = 1;
		break;
	}
	p++;
	if(count==1)
	{
	cout <<"\nNumber is present";
    }
	else
	{
	cout <<"\nNumber is not present";
    }
	return 0;
}
