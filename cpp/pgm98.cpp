//Polymorphism - virtual functions
#include<iostream>
using namespace std;
class automobile
{
	public :
		virtual void functions()
		{
			cout <<"\n---Functions of automobiles---";
		}
		
}; 
class wheel:public automobile
{
	public:
		void functions()
		{
			this->automobile::functions();
			cout <<"\nWheel helps the car to run ";
		}
};
class glass:public automobile
{
	public:
		void functions()
		{
			this->automobile::functions();
			cout <<"\nGlass protects us from sunlight, wind and rain";
		}
};
class runauto
{
	public :
		void loadfunctions(automobile *automobile)
		{
			automobile->functions();
		}
};
int main()
{
	runauto *r = new runauto;
	automobile *a;
	
	wheel w;
	glass g;
	
	a = &w;
	r->loadfunctions(a);
	
	a = &g;
	r->loadfunctions(a);
	
	return 0;
}
