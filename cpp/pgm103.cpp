#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string str1 = "Jaydeep";
	ofstream out("cpptext.txt");
	out<<str1;
	
	string str2;
	ifstream in("cpp.txt");
	in>>str2;
	getline(in,str2);
	cout <<str2;
	
	return 0;
}
