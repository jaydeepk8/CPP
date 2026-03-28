//Polymorphism - virtual functions
#include<iostream>
using namespace std;
class animal
{
	public:
		virtual void eat()
		{
			cout<<"animal eats....";
		}
};
class dog:public animal
{
	public :
		void eat()
		{
			cout <<"\nDog eat veg and non-veg both";
		}
};
class cow:public animal
{
	public :
		void eat()
		{
			cout <<"\nCow eat veg only";
		}
};
int main()
{
	animal *a = new cow();
	animal *b = new dog();
	a->eat();
	b->eat();
	return 0;
}

