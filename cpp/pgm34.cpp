// freind function - addition 
#include<iostream>
using namespace std;

class Addition
{
	int a,b;
	public :
		friend void add(Addition ad);
};

void add(Addition ad)
{
	cout <<"Enter two numbers :";
	cin >>ad.a>>ad.b;
	cout <<"\nAddition :"<<ad.a + ad.b;
}

int main()
{
	Addition ad;
	add(ad);
	return 0;
}
