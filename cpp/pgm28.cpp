// class - time
#include<iostream>
using namespace std;

class time 
{
	private :
		int hrs,mins,secs;
		
	public :
		void gettime();
		void puttime();
		void addtime(time t1, time t2);
		
};

void time :: gettime()
{
	cout <<"Enter time :";
	
	cout <<"\nHours ?";
	cin >>hrs;
	
	cout <<"\nMinutes ?";
	cin >>mins;
	
	cout <<"\nSeconds ?";
	cin >>secs;
}

void time :: puttime()
{
	cout <<endl;
	cout <<"\nTime after add :";
	cout <<hrs<<":"<<mins<<":"<<secs<<endl;
}

void time :: addtime(time t1, time t2)
{
	this->secs=t1.secs+t2.secs;
	this->mins=t1.mins+t2.mins+this->secs/60;;
	this->hrs=t1.hrs+t2.hrs+(this->mins/60);
	this->mins%=60;
	this->secs%=60;
}

int main()
{
	time t1,t2,t3;
	t1.gettime();
	t2.gettime();
	t3.addtime(t1,t2);
	t3.puttime();
	
	return 0;
}
