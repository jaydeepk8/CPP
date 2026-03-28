#include<iostream>
using namespace std;

class average
{
	int a,b,c,sum;
	float avg;
	
	public :
		void accept();
		void calc();
		void display();
};
void average::accept()
{
	cout <<"Enter three numbers :";
	cin >>a;
	cin >>b;
	cin >>c;
}
void average::calc()
{
	sum = a+b+c;
	avg = sum/3;
}
void average::display()
{
	cout <<"\nSum is :"<<sum;
	cout <<"\nAverage is :"<<avg;
} 
int main()
{
	average a;
	a.accept();
	a.calc();
	a.display();
	
	return 0;
}
