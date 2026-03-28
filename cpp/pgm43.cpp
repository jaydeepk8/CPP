#include<iostream>
#include<iostream>
using namespace std;

class student
{
	char name[20];
	int per;
	
	public :
		student()
		{
			
			per = 0;
		}
	void accept()
	{
		cout <<"Enter name and percentage :";
		cin >>name;
		cin>>per;
	}
	void display()
	{
		cout <<"\nName :"<<name;
		cout <<"\nPercentage :"<<per;
	}	
};
int main()
{
	student s1;
	s1.accept();
	s1.display();
	
	return 0;
}
