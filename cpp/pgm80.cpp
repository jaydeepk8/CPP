#include<iostream>
using namespace std;

class complex
{
	int real,imag;
	public :
		complex(int r, int i)
		{
			real = r;
			imag = i;
		}
		int get_real()
		{
			return real;
		}
		int get_imag()
		{
			return imag;
		}
		void add(complex c1)
		{
			cout <<c1.get_real()+real<<"+i"<<c1.get_imag()+imag<<endl;
		}
		void diff(complex c1)
		{
			cout <<real-c1.get_real()<<"+i"<<imag-c1.get_imag()<<endl;
		}
		void multi(complex c1)
		{
			cout<<((real*c1.get_real())-(imag*c1.get_imag()))<<"+i"<<((real*c1.get_imag())+(imag*c1.get_real()))<<endl;
		}
};
int main()
{
	complex c1(4,5);
	complex c2(10,20);
	c1.add(c2);
	c1.diff(c2);
	c1.multi(c2);
	
	return 0;
}
