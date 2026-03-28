//Polymorphism - operator overloading - binary
#include<iostream>
using namespace std;
class marks
{
	int m1,m2;
	public :
		marks()
		{
			m1 = 0;
			m2 = 0;
		}
		marks(int i, int j)
		{
			m1 = i;
			m2 = j;
		}
		void operator = (const marks &m)
		{
			m1 = m.m1;
			m2 = m.m2;
		}
		void show()
		{
			cout <<"\nMarks of first subject :"<<m1;
			cout <<"\nMarks of second subject :"<<m2;
		}
};
int main()
{
	marks mk1(89,95);
	marks mk2(50,99);
	
	cout <<"\nMarks of first student :";
	mk1.show();
	cout <<"\nMarks of second student :";
	mk2.show();
	
	mk1=mk2;
	
	cout <<"\nMarks in first subject :";
	mk1.show();
	cout <<"\nMarks in second subject :";
	mk2.show();
	
	return 0;
}











