// class - ststic(2)
#include<iostream>
using namespace std;

class weight
{
	float m;
	static float g;
	
	public :
		void get();
		void put();
};

float weight ::g = 9.8;
void weight ::get()
{
	cout <<"Enter mass :";
	cin >>m;
}

void weight ::put()
{
	cout <<"\nWeight :"<<m*g;
}
int main()
{
	weight W;
	W.get();
	W.put();
	return 0;
}
