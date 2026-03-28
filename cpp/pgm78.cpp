#include<iostream>
using namespace std;

class student
{
	int roll,phno;
	char address[20];
	public :
		void accept();
		void display();
};
void student::accept()
{
	cout <<"Enter Roll no, Phone no and Address of Sam :";
	cin >>roll;
	cin >>phno;
	cin >>address;
	
	cout <<"\n\n";
	cout <<"Enter Roll no, Phone no and Address of John :";
	cin >>roll;
	cin >>phno;
	cin >>address;
}
void student::display()
{
	cout <<"\n\n";
	cout <<"\nDetails of Sam :";
	cout <<"\nRoll no :"<<roll;
	cout <<"\nPhone no :"<<phno;
	cout <<"\nAddress :"<<address;
	
	cout <<"\n\n";
	cout <<"\nDetails of John :";
	cout <<"\nRoll no :"<<roll;
	cout <<"\nPhone no :"<<phno;
	cout <<"\nAddress :"<<address;
}
int main()
{
	student S,J;
	S.accept();
	S.display();
	J.accept();
	J.display();
	
	return 0;
}
