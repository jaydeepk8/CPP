#include<iostream>
using namespace std;

class motor_bike
{
	char brand[10];
	int avg,cc;
	
	public :
		void get();
		void show();
};
void motor_bike :: get()
{
	cout <<"Enter brand name, average and cc :";
	cin >>brand;
	cin >>avg;
	cin >>cc;
}
void motor_bike :: show ()
{
	cout <<"\nBrand name :"<<brand<<"\nAverage :"<<avg<<"\nCC :"<<cc;
}
int main()
{
	motor_bike b[5];
	int i;
	
	for (i=0;i<5;i++)
	{
		b[i].get();
	}
	for (i=0;i<5;i++)
	{
		cout <<"\n";
		b[i].show();
	}
	return 0;
}
