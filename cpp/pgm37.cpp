// arrays of objects
#include<iostream>
using namespace std;

class student
{
	int roll_no;
	char name[20];
	public :
		void accept();
		void display();
		
};

void student :: accept()
{
	cout <<"Enter name and roll no:";
	cin >>name;
	cin >>roll_no;
}
void student :: display()
{
	cout <<"\nName :"<<name;
	cout <<"\nRoll no :"<<roll_no;
}
int main()
{
	student s[3];
	int i;
	for (i=0;i<3;i++)
	{
		s[i].accept();
	}
	for (i=0;i<3;i++)
	{
		cout <<"\n";
		s[i].display();	
	}
	return 0;
}
