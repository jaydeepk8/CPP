//structure - student 
#include<iostream>
using namespace std;
struct students 
{
	int roll;
	char name[20];
	float marks;
}s[2];
int main()
{
	int i;
	for(i=0;i<2;i++)
	{
		s[i].roll=i+1;
		cout <<"Enter roll no :"<<s[i].roll;
		
		cout <<"\nEnter name :";
		cin >>s[i].name;
		
		cout <<"\nEnter marks :";
		cin >>s[i].marks;
		
	}
	for(i=0;i<2;i++)
	{
		cout << "\nRoll no :"<<s[i].roll;
		cout <<"\nName :"<<s[i].name;
		cout <<"\nMarks :"<<s[i].marks;
		
		return 0;
	}
}
