//identify alphabet, digit or symbol 
#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout <<"Enter your value :";
	cin >>ch;
	
	if(ch>=65&&ch<=90)
	{
		cout <<"\nIt is an upper case alphabet";
	}
	else if (ch>=97&&ch<=122)
	{
		cout <<"\nIt is a lower case character";
	}
	else if (ch>=48&&ch<=57)
	{
		cout <<"\nIt is a digit";
	}
	else 
	{
		cout <<"\nIt is a symbol";
	}
	return 0;
}
