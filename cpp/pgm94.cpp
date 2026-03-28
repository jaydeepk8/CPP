//Polymorphism - operator overloading - binary
#include<iostream>
using namespace std;
class complex
{
	int a,b;
	public :
		void take()
		{
			cout <<"Enter the value of complex number a :";
			cin >>a;
			cout <<"Enter the value of complex number b :";
			cin >>b;
		}
		complex operator + (complex ob)
		{
			complex t;
			t.a = a+ob.a;
			t.b = b+ob.b;
			return(t);
		}
		complex operator - (complex ob)
		{
			complex t;
			t.a = a-ob.a;
			t.b = b-ob.b;
			return(t);
		}
		void show()
		{
			cout <<a<<"+"<<" "<<b<<"i";
		}
};
int main()
{
	complex c1,c2,res1,res2;
	
	c1.take();
	c2.take();
	
	res1 = c1+c2;
	res2 = c1-c2;
	
	cout <<"\nInput values :";
	c1.show();
	c2.show();
	
	cout <<"\nResult :";
	res1.show();
	res2.show();
	
	return 0;
}








