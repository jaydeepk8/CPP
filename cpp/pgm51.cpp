#include<iostream>
using namespace std;

class box
{
	int len,wid,hei;
	public :
		void accept()
		{
			cout <<"Enter length, width and height :";
			cin >>len;
			cin >>wid;
			cin >>hei;
		}
	void display()
	{
		cout <<"\nLength :"<<len;
		cout <<"\nWidth :"<<wid;
		cout <<"\nHeight :"<<hei;
	}	
};
class cupboard:public box
{
	public :
		int no_of_shelves;
		void get()
		{
			cout <<"\n\n\nEnter number of shelves :";
			cin >>no_of_shelves;
		}
	void put()
	{
		cout <<"\nNumber of shelves :"<<no_of_shelves;
	}	
};
int main()
{
	cupboard cb;
	cb.accept();
	cb.display();
	cb.get();
	cb.put();
	
	return 0;
}
