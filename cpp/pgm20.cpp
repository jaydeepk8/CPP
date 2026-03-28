// to calculate percentage of a student
#include<iostream>
using namespace std;
int main()
{
	int num,i;
	float marks[10],per=0,total=0;
	
	cout <<"Enter number of subject :";
	cin >>num;
	cout <<"\nEnter marks of subject :";
	
	for(i=0;i<num;i++)
	{
		cin >>marks[i];
	}
	for(i=0;i<num;i++)
	{
		total = total+marks[i];
	}
	per = total/num;
	
	cout <<"\nPercentage :"<<per;
	
	return 0;
}
