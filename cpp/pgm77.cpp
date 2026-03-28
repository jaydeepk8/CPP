#include<iostream>
using namespace std;

class circle
{
	float radius,area;
	public:
		void clac();
		void accept();
		void display();
};
void circle::accept()
{
	cout <<"Enter radius of circle :";
	cin >>radius;
}
void circle::clac()
{
	area = 3.14*radius*radius;
}


void circle::display()
{
	cout <<"\nArea of circle is :"<<area;
}
int main()
{
	circle c;
     
    c.accept();
	c.clac();
	c.display();
	
	return 0;
}
