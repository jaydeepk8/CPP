// friend function 
#include<iostream>
using namespace std;

class AB;
class XY
{
	int n1;
	public :
		void set(int i)
		{
			n1 = i;
		}
	friend void swap(AB,XY);	
};
class AB
{
	int n2;
	public :
		void set(int i)
		{
			n2 = i;
		}
	friend void swap(AB,XY);	
};
void swap (AB m, XY n)
{
	int temp;
	cout <<"Before swapping : \n n1 :"<<n.n1<<"\n n2 :"<<m.n2;
	temp = m.n2;
	m.n2 = n.n1;
	n.n1 = temp;
	
	cout <<"\nAfter swapping :\n n1 :"<<n.n1<<"\n n2 :"<<m.n2;
}
int main()
{
	AB m, XY n;
	m.set(10);
	n.set(20);
	swap (m,n);

    return 0;
}
