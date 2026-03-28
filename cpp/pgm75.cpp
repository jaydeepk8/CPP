#include<iostream>
using namespace std;

class rev
{
	int n,n1,rn=0,d;
	public :
		void take();
		void give();
		void calc();
};
void rev :: take()
{
	cout <<"Enter any no :";
	cin >>n;
}
void rev :: calc()
{
	n1 = n;
	while(n>0)
	{
		d = n%10;
		rn = (rn*10)+d;
		n/=10;
	}
}
void rev :: give()
{
	cout <<"\nReverse of"<< n1 <<" is "<<rn;
}
int main()
{
	rev r;
	r.take();
	r.calc();
	r.give();
	return 0;
}
