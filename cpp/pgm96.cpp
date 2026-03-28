//Polymorphism - function overloading
#include<iostream>
using namespace std;

inline string add(string str1, string str2)
{
	str1+=str2;
	return str1;
}

inline double add(double var1, double var2)
{
	var1 = var1+var2;
	return var1;
}

inline int add(int a, int b)
{
	a = a-b;
	return a;
}

int main()
{
	cout <<add("C++"," Unlished")<<"\n";
	cout <<add(87.5,6.6)<<"\n";
	cout <<add(10,5)<<"\n";
	
	return 0;
}





