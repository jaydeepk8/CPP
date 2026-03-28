// to calculate grade of a student 
#include<iostream>
using namespace std;
int main()
{
	int i,num;
	float marks[10],per = 0,total = 0;
	
	cout <<"Enter number of subject :";
	cin >>num;
	
	cout <<"\nEnter marks of"<<num<<"subject :";
	
	for (i=0;i<num;i++)
	{
		cin >>marks[i];
	}
	
	for (i=0;i<num;i++)
	{
		total = total+marks[i];
	}
	
	per = total/num;
	
	cout <<"\nPercentage :"<<per<<"%";
	
	if (per>85)
	{
		cout <<"\nA grade";
	}
	else if (per<85 && per>=75)
	{
		cout <<"\nB grade";
	}
	else if (per<75 && per>=50)
	{
		cout <<"\nC grade";
	}
	else if (per<50 && per>=30)
	{
		cout <<"\nD grade";
	}
	else 
	{
          	cout <<"\nFail";
    }              
	
	return 0;
}


