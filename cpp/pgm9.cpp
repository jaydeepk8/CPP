//structure 
#include<iostream>
using namespace std;
struct employees 
{
	int id;
	char name[20];
	int age;
	long salary;
	
};
int main()
{
	employees E;
	cout <<"Enter id :";
	cin >>E.id;
	
	cout <<"\nEnter name :";
	cin >>E.name;
	
	cout <<"\nEnter age :";
	cin >>E.age;
	
	cout <<"\nEnter salary :";
	cin >>E.salary;
	
	cout <<"\n\nid :"<<E.id;
	cout <<"\nName :"<<E.name;
	cout <<"\nAge :"<<E.age;
	cout <<"\nSalary :"<<E.salary;
	
	return 0;
}
