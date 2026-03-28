//palindrome 
#include<iostream>
using namespace std;
int main()
{
	int a,b,no,c;
	cout <<"Enter number :";
	cin >>no;
	
	b = no;
	
	while (no>0)
	{
		a = no%10;
		no = no/10;
		c = c*10+a;
	}
	if(c==b)
	{
		cout <<"\nPalindrome";
	}
	else
	{
		cout <<"\nNot Palindrome";
	}
	return 0;
}
