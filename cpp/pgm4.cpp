//factorial of a number 
#include<iostream>
using namespace std;
int main()
{
    int i,no,fact=1;
	
	cout <<"Enter a number : ";
	cin >>no;
	
	for (i=1;i<=no;i++)
	{
		fact = fact*i;
	}
	cout << "Factorial is :"<<fact;
	
	return 0;
}
