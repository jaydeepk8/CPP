#include<iostream>
using namespace std;

class time
{
	int sec,min,hr;
	
	public :
		void get();
		void put();
		void add(time t1, time t2);
		
};
void time :: get()
{
	cout <<"Enter time :";
	cout <<"\nHours ?"; 
	cin >>hr;
	cout <<"\nMinutes ?";
	cin >>min;
	cout <<"\nSeconds ?";
	cin >>sec;
}
void time :: put()
{
	cout <<"\n\n";
	cout <<"\nTime after add :";
	cout <<hr<<":"<<min<<":"<<sec;
}
void time ::add(time t1, time t2)
{
	this->sec=t1.sec+t2.sec;
	this->min=t1.min+t2.min+this->sec/60;
	this->hr=t1.hr+t2.hr+(this->min/60);
	this->min%=60;
	this->sec%=60;
}
int main()
{
	time t1,t2,t3;
	t1.get();
	t2.get();
	t3.add(t1,t2);
	t3.put();
	
	return 0;
}
