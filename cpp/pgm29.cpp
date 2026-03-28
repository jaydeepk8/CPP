// class - convert feet to inches 
#include<iostream>
using namespace std;

class converter
{
	private :
		float feet,inches;
		
	public :
		void getData()
		{
			cout <<"Enter value in feet :";
			cin >>feet;
		}
		
		void showData()
		{
			inches = feet*12.0;
			cout <<"\nDistance in inches :"<<inches;
		}
};

int main()
{
	converter convo;
	
	convo.getData();
	convo.showData();
	
	return 0;
} 
