#include<iostream>
using namespace std;

char choice1;
char choice2;
char choice3;
char choice4;
char choice5;
char choice6;
char choice7;
char choice8;
char choice9;
char choice10;
char choice11;
char choice12;


class Date
{
	public:
		char date[30];
		void date_d()
		{
		    cout <<"\nEnter Date :";
	        cin.ignore();
	        cin.getline(date, 30);
		}
		void disp_date()
		{
			cout<<"\n\n\n\n------------------------------------------------------------";
			cout <<"\nDate :"<<date;
		    cout<<"\n\n------------------------------------------------------------";
		}
}; 
class Piyush : public Date
{
	
	public:
		void piyush()
		{
			cout <<"\n\n\nName = Piyush Yawatkar";
			cout <<"\nRoll No = 1";
			cout <<"\nEnter present or absent :";
			cin >>choice1;
		}
		void disp_piyush()
		{
				switch(choice1)
			{
				case 'p':
					cout <<"\nPiyush Yavatkar = Present";
					break;
				case 'a' :
					cout <<"\nPiyush Yavatkar = Absent";
					break;
			}
		}
};
class Jaydeep :  public Piyush
{
	public:
		void jaydeep()
		{
			cout <<"\n\nName = Jaydeep Kulkarni";
			cout <<"\nRoll No = 2";
			cout <<"\nEnter present or absent :";
			cin >>choice2;
		}
		void disp_jaydeep()
		{
			switch(choice2)
			{
				case 'p':
					cout <<"\nJaydeep Kulkarni = Present";
					break;
				case 'a' :
					cout <<"\nJaydeep Kulkarni = Absent";
					break;
					
			}
		}
};
class Diksha :  public Jaydeep
{
	public:
		void diksha()
		{
			cout <<"\n\nName = Diksha Jadhav";
			cout <<"\nRoll no. = 3";
			cout <<"\nEnter present or absent :";
			cin >>choice3;
		}
	    void disp_diksha()
		{
				switch(choice3)
			{
				case 'p':
					cout <<"\nDiksha Jadhav = Present";
					break;
				case 'a' :
					cout <<"\nDiksha Jadhav = Absent";
					break;
					
			}
		}
		
};

class Avantika :  public Diksha
{
	public:
		void avantika()
		{
			cout <<"\n\nName = Avantika Bhatgave";
			cout <<"\nRoll no. = 4";
			cout <<"\nEnter present or absent :";
			cin >>choice4;
		}
	    void disp_avantika()
		{
				switch(choice4)
			{
				case 'p':
					cout <<"\nAvantika Bhatgave = Present";
					break;
				case 'a' :
					cout <<"\nAvantika Bhatgave = Absent";
					break;
					
			}
		}
		
};
class Sarth : public Avantika 
{
	public:
		void sarth()
		{
			cout <<"\n\nName = Sarth Sheth";
			cout <<"\nRoll no. = 5";
			cout <<"\nEnter present or absent :";
			cin >>choice5;
		}
	    void disp_sarth()
		{
				switch(choice5)
			{
				case 'p':
					cout <<"\nSarth Sheth = Present";
					break;
				case 'a' :
					cout <<"\nSarth Sheth = Absent";
					break;
					
			}
		}
};
class Nehete_maam : public Sarth
{
	public:
		void nehete_maam()
		{
			cout <<"\n\n\nName = Pallavi Nehete";
			cout <<"\nTeacher ID  = 10";
			cout <<"\nEnter present or absent :";
			cin >>choice11;
		}
		void disp_nehete()
		{
				switch(choice11)
			{
				case 'p':
					cout <<"\nPallavi Nehete = Present";
					break;
				case 'a' :
					cout <<"\nPallavi Nehete = Absent";
					break;
					
			}
		}
};
class Fatangare_maam : public Nehete_maam
{
	public:
		void fatangare_maam()
		{
			cout <<"\n\nName = Mrunal Fatangare";
			cout <<"\nTeacher ID  = 12";
			cout <<"\nEnter present or absent :";
			cin >>choice12;
		}
		void disp_fatangare()
		{
				switch(choice12)
			{
				case 'p':
					cout <<"\nMrunal Fatangare = Present";
					break;
				case 'a' :
					cout <<"\nMrunal Fatangare = Absent";
					break;
					
			}
		}
};
int main()
{
	cout<<"\n\n\t\t\t\t\tWELCOME TO ATTENDANCE MANAGEMENT SYSTEM";
	int pin;
	while(1)
	{
		cout<<"\n\n\nEnter PIN :";
	    cin>>pin;
		if(pin==1234)
	    {
		    while(1)
	        {
	        int choice;
	        cout<<"\n\n\n\n-------------------------------------------------------------------------";
	        cout <<"\n1. Student attendance";
	        cout <<"\n2. Staff Attendance ";
	        cout<<"\n3. Exit";
	        cout<<"\n-------------------------------------------------------------------------------";
	        cout <<"\n(Note - Enter 'a' for Absent and Enter 'p' for Present)";
	        cout<<"\n-------------------------------------------------------------------------------";
	        cout<<"\n\nEnter your choice :";
	        cin>>choice;
	        
			    switch(choice)
	            {
	                
	            case 1: cout<<"\n\n*** Take Student Attendacnce ****"<<endl;
			    
	            Sarth d;
	            d.date_d();
	            d.piyush();
	            d.jaydeep();
	            d.diksha();
	            d.avantika();
	            d.sarth();
	            d.disp_date();
                d.disp_piyush();
	            d.disp_jaydeep();
	            d.disp_diksha();
	            d.disp_avantika();
	            d.disp_sarth();
	            break;
	
	
	            case 2 : cout<<" \n\n**** Take Staff Attendance ****"<<endl;
		
	           	Fatangare_maam f;
		        f.date_d();
		        f.nehete_maam();
		        f.fatangare_maam();
		        f.disp_date();
		        f.disp_nehete();
		        f.disp_fatangare();
		        break;
		        
	            case 3 : exit(0);
	            break;	
	            
				default : exit(0);
	            }
            }
	    }
	    else
	    {
		    cout <<"\nWrong pin";
	    }
	}
	return 0;
}

