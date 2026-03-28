// class - declaring time
#include<iostream>
using namespace std;

class time 
{
	int hr,min,sec;
	public :
		void accept();
		void display();
};

void time ::accept()
{
	cout <<"Enter time in minutes :";
	cin >>min;
}

void time :: display()
{
	hr = min/60;
	sec = min*60;
	
	cout <<"\nHour :"<<hr;
	cout <<"\nSecond :"<<sec;
}

int main()
{
	time S;
	S.accept();
	S.display();
	
	return 0;
}
