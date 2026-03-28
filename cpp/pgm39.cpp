#include<iostream>
#include<string.h>
using namespace std;

class staff
{
	char name[20], post[10];
	
	public :
		void get()
		{
			cout <<"Enter name and post :";
			cin >>name;
			cin >>post;
		}
		void display();
		
};
void staff :: display()
{
	if(strcmp(post,"HOD")==0)
	{
		cout <<"\nStaff"<<name<<" has the post"<<post;
	}
}
int main ()
{
	staff s[5];
	int i,j;
	
	for(i=0;i<5;i++)
	{
		s[i].get();
	}
	for(j=0;j<5;j++)
	{
		cout <<"\n";
		s[j].display();
	}
	return 0;
}
