#include<iostream>
using namespace std;

class birthday
{
	char day[10], month[10];
	int year;
	
	public :
		void take()
		{
			cout <<"Enter day month and year of birthday :";
			cin >>day;
			cin >>month;
			cin >>year;
		}
		void give()
		{
			cout <<"\nDay :"<<day;
			cout <<"\nMonth :"<<month;
			cout <<"\nYear :"<<year;
		}
};
int main()
{
	int i,j;
	birthday hbd[5], *ptr;
	ptr = &hbd[0];
	
	for(i=0;i<5;i++)
	{
		ptr->take();
		ptr++;
	}
	ptr = &hbd[0];
	for(j=0;j<5;j++)
	{
		ptr->give();
		cout <<"\n";
		ptr++;
	}
	return 0;
}
