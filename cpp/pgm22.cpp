// classes 
#include<iostream>
using namespace std;

class CEO 
{
	private :
		int a,b,c;
	public :
		int d,e;
		
	void setData(int a1, int b1, int c1);
	void getData()
	{
		cout <<"Value of a is :"<<a;
		cout <<"\nValue of b is :"<<b;
		cout <<"\nValue of c is :"<<c;
		cout <<"\nValue of d is :"<<d;
		cout <<"\nValue of e is :"<<e;
	}	
};

void CEO :: setData(int a1, int b1, int c1)
{
	a = a1;
	b = b1;
	c = c1;
}

int main()
{
	CEO Jay;
	Jay.d = 34;
	Jay.e = 89;
	Jay.setData(1,2,4);
	Jay.getData();
	return 0;
}
