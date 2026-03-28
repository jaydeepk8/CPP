//Polymorphism - pure virtual functions 
#include<iostream>
using namespace std;
class pattern
{
	public:
	float l;
	
		void input()
		{
			cin>>l;
		}
		virtual float area()=0;
};
class square:public pattern
{
	public :
		float area()
		{
			return l*l;
		}
};
class circle:public pattern
{
	public:
		float area()
		{
			return 3.14*l*l;
		}
};
int main()
{
	square s;
	circle c;
	
	cout <<"Enter length of square :";
	s.input();
	cout <<"\nArea of square :"<<s.area();
	cout <<"\nEnter radius of circle :";
	c.input();
	cout <<"\nArea of circle :"<<c.area();
	
	return 0;
}
