#include<iostream>
#include<string.h>
using namespace std;

class student
{
	int roll;
	char name[20], course[20];
	
	public:
		student (char str[30] = "computer engg");
		void accept();
		void display();
		
};
student :: student(char str[30])
{
	strcpy(course,str);
}
void student::accept()
{
	cout <<"Enter roll no and name :";
	cin >>roll;
	cin >>name;
}
void student::display()
{
	cout <<"\nRoll no :"<<roll;
	cout <<"\nName :"<<name;
	cout <<"\nCourse :"<<course;
}
int main()
{
	student s[2];
	int i,j;
	
	for (i=0;i<2;i++)
	{
		s[i].accept();
	}
	for (j=0;j<2;j++)
	{
		s[j].display();
	}
	return 0;
}
