#include<iostream>
#include<iostream>
using namespace std;

class student
{
	char name[20];
	int per;
	
	public :
		student (char n[20], int p)
		{
		
			per = p;
		}
	void display()
	{
		cout <<"Name :"<<name;
		cout <<"\nPercentage :"<<per;
	}	
};
int main()
{
	student s1("ABC",88);
	s1.display();
	
	return 0;
}
