
#include<iostream>
using namespace std;
//#include(stdio.h)
class Employee
{
	private:
		int date;
		float sal;
		char name[20];
		public:
			void set()
			{
			 cout<<"\nEnter Date of joining  Salary and Employee name ";
			 cin>>date>>sal>>name;
			 
			}
			void show()
			{
				cout<<"\n" <<date<<"\t\t "<<sal<<"\t\t"<<name;
				
			}
};
main()
 {
     Employee e[30];
     cout<<"\nEmployee  Details";
	
//	cout<<"Enter the employee information:"<<endl;
     for(int i=0;i<10;i++)
     {
         e[i].set();
     }
     cout<<endl<<"The employee information is:";
     cout<<"\nDate of Joining      Salary        Name     \n";
	cout<<"\n---------------------------------------------------";
     
     for(int i=0; i<10;i++)
     {
         e[i].show();
     }
 }