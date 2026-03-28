// constructor 
#include<iostream>
using namespace std;

class time
{
	int hr,min,sec;
	public :
		time(int a, int b, int c);
		void display();
};
time ::time(int a, int b, int c)
{
	hr = a;
	min = b;
	sec = c;
}
void time :: display()
{
	cout <<"Hours :"<<hr;
	cout <<"\nMinutes :"<<min;
	cout <<"\nSeconds :"<<sec;
}
int main()
{
	time t1(1,60,120);
	time t2(2,120,240);
	
	t1.display();
	cout <<"\n\n";
	t2.display();
	
	return 0;
}
