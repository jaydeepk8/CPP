// single inheritance 
#include<iostream>
using namespace std;

class employee
{
	int id;
	char name[20];
	public :
		void get()
		{
			cout <<"Enter id and name :";
			cin >>id;
			cin >>name;
		}
	void put()
	{
		cout <<"\nEmployee id :"<<id;
		cout <<"\nEmployee name :"<<name;
	}	
};
class fitness:public employee
{
	float h,w;
	public :
		void accept()
		{
			cout <<"\n\nEnter height and weight :";
			cin >>h;
			cin >>w;
		}
	void display()
	{
		cout <<"\nHeight :"<<h;
		cout <<"\nWeight :"<<w;
	}	
};
int main()
{
	fitness f;
	f.get();
	f.put();
	f.accept();
	f.display();
	return 0;
}
