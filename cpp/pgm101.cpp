//Function overloading 
#include<iostream>
using namespace std;
int add(int a,int b)
{
	return a+b;
	
}
double add(double i,double j)
{
	return i-j;
}
int main()
{
	cout <<"Addition :"<<add(5,15);
	cout <<"\nSubtraction :"<<add(10.2,5.5);
	return 0;
}
