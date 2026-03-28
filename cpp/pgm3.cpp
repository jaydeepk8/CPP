//prime number
#include<iostream>
using namespace std;

int main()
{
	int i,no;
	cout << "Enter a number : ";
	cin >> no;
	
	for (i=2;i<no;i++)
	{
		if(no%i==0)
		{
			cout <<"\nNot a prime number";
			break;
		}
		
	}
	if(no==i)
	{
		cout << "\nPrime number";
	}

	return 0;
}
