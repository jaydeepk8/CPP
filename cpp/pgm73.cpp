#include<iostream>
using namespace std;
class student
{
	int roll;
	char name[20];
	
	public :
		void get()
		{
			cout <<"Enter roll no and name of student :";
			cin >>roll>>name;
		}
		void put()
		{
			cout <<"\nRoll no :"<<roll;
			cout <<"\nName :"<<name;
		}
};
int main()
{
	student S;
	S.get();
	S.put();
	
	return 0;
}
