// multiple inheritance
#include<iostream>
using namespace std;

class triangle
{
	public :
	float base, height;
	    void gettri()
		{
			cout <<"Enter base and height of triangle :";
			cin >>base;
			cin >>height;
		}
};
class rectangle
{
		public :
	float len, bre;

		void getrec()
		{
			cout <<"\n\nEnter length and breadth of rectangle :";
			cin >>len;
			cin >>bre;
		}
};
class shape:public triangle, public rectangle
{
	float area;
	public :
		void areatri()
		{
			area = 0.2*base*height;
			cout <<"\nArea of triangle :"<<area;
		}
		void arearec()
		{
			area = len*bre;
			cout <<"\nArea of rectangle :"<<area;
		}
};
int main()
{
	shape s;
	s.gettri();
	s.areatri();
	s.getrec();
	s.arearec();
	return 0;
}
