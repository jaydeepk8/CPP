#include<iostream>
using namespace std;

class salary
{
	float basic, ta, da, hra,BASIC;
	public :
		salary(float,float,float,float);
		void display();
};
salary :: salary(float ta, float basic, float da = 200, float hra = 400)
{
	basic = BASIC;
	da = (basic*da)/100;
	hra = (basic*hra)/100;
	ta = (basic*ta)/100;
}
void salary :: display()
{
	cout <<"salary of employee :"<<(da+hra+ta+basic);
}
int main()
{
	salary s(110,6000);
	s.display();
	
	return 0;
}
