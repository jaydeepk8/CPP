// this function
#include<iostream>
using namespace std;

class student
{
	int roll;
	float per;
	
	public :
		void accept()
		{
			cout <<"Enter roll no and percentage of student :";
			cin>>roll;
			cin>>per;
			
			this->display();
		}
		void display()
		{
			cout <<"\nRoll no :"<<roll;
			cout <<"\nPercentage :"<<per;
		}
};
int main()
{
	student s;
	s.accept();
	
	return 0;
}
