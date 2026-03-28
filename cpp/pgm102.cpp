//Function overloading 
#include<iostream>
using namespace std;
void fun(int);
void fun(float);

void fun(int i)
{
	cout <<"\nFirst value:"<<i;
	
}
void fun(double j)
{
	cout <<"\nSecond value :"<<j;

}
int main()
{
	fun(50);
	fun(10.3);
	return 0;
}
