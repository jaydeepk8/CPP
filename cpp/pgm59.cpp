// hierarchical inheritance
#include<iostream>
using namespace std;

class publication
{
	char title[20];
	int price;
	public :
		void get()
		{
			cout <<"Enter title and price of publication :";
			cin >>title;
			cin >>price;
		}
		void put()
		{
			cout <<"\nTitle :"<<title;
			cout <<"\nPrice :"<<price;
		}
};
class book : public publication
{
	char author[20];
	public :
		void take()
		{
			cout <<"\n\nEnter name of author :";
			cin >>author;
		}
		void give()
		{
			cout <<"\nAuthor name :"<<author;
		}
};
class audio_cassette : public publication
{
	float playing_time;
	public :
		void accept()
		{
			cout <<"\n\nEnter audio cassette playing time :";
			cin >>playing_time;
		}
		void display()
		{
			cout <<"\nPlaying time :"<<playing_time;
		}
};
int main()
{
	book b;
	audio_cassette ac;
	
	b.get();
	b.put();
	b.take();
	b.give();
	ac.accept();
	ac.display();
	
	return 0;
}
