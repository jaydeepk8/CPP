#include<iostream>
using namespace std;

class result 
{
	public :
		char name[20];
		int mk1,mk2,mk3;
		void accept();
};
void result :: accept()
{
	cout <<"Enter name mark 1, mark 2 and mark 3 :";
	cin >>name;
	cin >>mk1;
	cin >>mk2;
	cin >>mk3;
}
int main()
{
	result r[5];
	float avg;
	int i,j;
	
	for (i=0;i<5;i++)
	{
		r[i].accept();
	}
	cout <<"\nStudents having A grade :";
	for (j=0;j<5;j++)
	{
		avg = ((r[j].mk1+r[j].mk2+r[j].mk3)/3);
		if (avg>75)
		{
			for(j=0;j<5;j++)
			{
				cout <<"\n";
				cout <<r[j].name;
			}
			
		}
		return 0;
	}
}
