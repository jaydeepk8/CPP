//Polymorphism - pure virtual functions 
#include<iostream>
using namespace std;
class shape
{
	public:
		virtual float area()=0;
};
class square:public shape
{
	float a;
	public:
		square(float l)
		{
			a=l;
		}
		float area()
		{
			return a*a;
		}
};
class circle:public shape
{
	float r;
	public:
		circle(float x)
		{
			r=x;
		}
		float area()
		{
			return 3.14*r*r;
		}
};
class rectangle:public shape
{
	float l;
	float b;
	public:
		rectangle(float x, float y)
		{
			l=x;
			b=y;
		}
		float area()
		{
			return l*b;
		}
};
int main()
{
	shape *s;
	square sq(3.5);
	rectangle r(6,8);
	circle c(7.8);
	
	s = &sq;
	int a1 = s->area();
	s = &r;
	int a2 = s->area();
	s = &c;
	int a3 = s->area();
	
	cout <<"\nArea of square :"<<a1;
	cout <<"\nArea of rectangle :"<<a2;
	cout <<"\nArea of circle :"<<a3;
	
	return 0;
}
