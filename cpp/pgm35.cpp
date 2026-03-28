// friend function - swap 
#include<iostream>
using namespace std;

class swap_a
{
	int a,b;
	public :
		void set(int n, int m)
		{
			a = n;
			b = m;
		}
	friend void swap(swap_a sa);	
};
void swap(swap_a sa)
{
	int c;
	cout <<"Before swapping : \na :"<<sa.a<<"\nb:"<<sa.b;
	
	c = sa.a;
	sa.a = sa.b;
	sa.b = c;
	
	cout <<"\nAfter swapping : \na :"<<sa.a<<"\nb :"<<sa.b;
}
int main()
{
	swap_a sa;
	sa.set(30,20);
	swap(sa);
	return 0;
}
