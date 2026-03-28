// Destructor
#include<iostream>
using namespace std;

class destructor
{
	int count;
	public :
		destructor()
		{
			cout <<"No. of objects created :";
			count ++;
		}
	~destructor()
	{
		cout <<"\nNo. of objects destroyed :"<<count;
		count --;
	}	
};
int main()
{
	cout <<"\n\n";
	destructor d1,d2;
	cout <<"\n\n";
	
	return 0;
}
