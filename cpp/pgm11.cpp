//to print table of any number
#include<iostream>
using namespace std;
int main()
{
	int i,n,table=1;
	
	cout <<"Enter any number :";
	cin >>n;
	
	cout <<"Table of : "<<n;
	
	for(i=1;i<=10;i++)
	{
		table = n*i;
		
		cout <<"\n"<<table;
		
	}
	return 0;
}
