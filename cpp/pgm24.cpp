// class - student 
#include<iostream>
using namespace std;

class student 
{
	int roll;
	char name[20];
	
	public :
		void getdata();
		void putdata();
};

void student :: getdata()
{
	cout <<"Enter Roll No. :";
	cin >>roll;
	
	cout <<"\nEnter name :";
	cin >>name;
}

void student :: putdata()
{
	cout <<"\nRoll no:"<<roll;
	cout <<"\nName :"<<name;
}

int main()
{
	student s;
	
	s.getdata();
	s.putdata();
	
	return 0;
}
