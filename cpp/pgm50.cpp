#include<iostream>
using namespace std;

class furniture
{
	char material[20];
	int price;
	public :
		void get()
		{
			cout <<"Enter material and price :";
			cin >>material;
			cin >>price;
		}
	void put()
	{
		cout <<"\nMaterial :"<<material;
		cout <<"\nPrice :"<<price;
	}	
};
class table : public furniture
{
	int height,sf;
	public :
	void accept()
		{
			cout <<"\n\nEnter Height and surface area :";
			cin >>height;
			cin >>sf;
		}
	void display()
	{
		cout <<"\nHeight :"<<height;
		cout <<"\nSurface area :"<<sf;
	} 	
};
int main()
{
	table t;
	t.get();
	t.put();
	t.accept();
	t.display();
	
	return 0;
}
