//opening two files 
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream outfile;
	outfile.open("Empname"); //opening a file using open() function
	outfile<<"\nJaydeep";      // writing the output using the 'outfile' object of ofstream
	outfile<<"\nGaurav";
	outfile<<"\nAditya";
	outfile.close();     //closing the file using close() function
	
	outfile.open("ACC");
	outfile<<"01";
	outfile<<"02";
	outfile<<"03";
	outfile.close();
	
	char line[20];
	ifstream infile;  //input file
	infile.open("Empname");  //opening Empname file
	cout <<"Name of Employees :";
	while(infile)
	{
		infile.getline(line,20);
		cout <<"\n"<<line;
	}
	infile.close();  //closing input file
	infile.open("ACC");  //for displaying account nos.
	cout <<"\nAccount numbers :";
	while(infile)
	{
		infile.getline(line,20);
		cout <<"\n"<<line;
	}
	infile.clear();
	return 0;
}
