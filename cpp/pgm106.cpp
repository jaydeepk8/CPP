//closing a file
#include<iostream>
#include<fstream>
using namespace std;
int main() 
{
	ofstream ofile("Student");
	cout <<"\nEnter student name :";
	char name[20];
	cin>>name;
	ofile<<name<<"\n";
	cout <<"\nEnter student roll no. :";
	int roll;
	cin>>roll;
	ofile<<roll<<"\n";
	ofile.close();
	
	ifstream ifile("Students");
	ifile>>name;
	ifile>>roll;
	cout <<"\nStudent name :"<<name;
	cout <<"\nRoll no :"<<roll;
	ifile.close();
	return 0;
}
