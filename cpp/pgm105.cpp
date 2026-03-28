// opening two files and storing contents
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream ofile;
	ofile.open("Student");
	ofile<<"\n1. Jaydeep Kulkarni";
	ofile<<"\n2. Gaurav Mali";
	ofile<<"\n3. Aditya Kamble";
	ofile.close();
	
	char str[50];
	ifstream ifile;
	ifile.open("Student");
	cout <<"---Name of Students---";
	while(ifile)
	{
		ifile.getline(str,50);
		cout<<"\n"<<str;
	}
	ifile.close();
	return 0;
} 
