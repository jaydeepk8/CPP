#include<iostream>
using namespace std;

class distance
{
	int dist1, dist2, dist3;
	public :
		distance (int a, int b)
		{
			dist1 = a;
			dist2 = b;
		}
	void display();	
};
void distance :: display()
{
	dist3 = dist1 + dist2;
	cout <<"Addition :"<<dist3;
}
int main()
{
	distance d1(60,120);
	d1.display();
	
	return 0;
	
}
