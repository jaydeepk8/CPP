// to find ASCII value of a number
#include<iostream>
#include<conio.h>
#include<ctype.h>
using namespace std;
int main()
{
	int num,resl;
	cout <<"Enter any character/symbol/digit :";
	num = getch();
	resl = toascii(num);
	cout <<"\nASCII value :"<<resl;
	
	return 0;
}
