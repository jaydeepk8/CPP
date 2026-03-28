// class - static 
#include<iostream>
using namespace std;

class simple_intrest
{
	int p,n;
	static int r;
	
	public :
		void get();
		void put();
};

int simple_intrest :: r=10;
void simple_intrest :: get()
{
	cout <<"Enter principle amount, duration and rate of intrest :";
	cin >>p>>n>>r;
}

void simple_intrest :: put ()
{
	cout <<"\nSimple intrest :"<<(p*n*r)/100;
}

int main()
{
	simple_intrest si;
	si.get();
	si.put();
	return 0;
}
