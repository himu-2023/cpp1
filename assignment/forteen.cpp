/*Write a program to calculate the average height of all the students of a class. The number of
 students and their heights are entered by the user.
*/
#include<iostream>
using namespace std;
class Student
{
	private:
	
		int height,total=0;
	public:
		void set()
		{
			cout<<"\n Enter height of students ";
			cin>>height;
			total=total+height;
			
		}
		void show()
		{
			cout<<"\nHeight="<<height;
			
		}
		int fun()
		{
			return total;
		}
};
main()
{
    int  i, num;
    int ht;
    cout<<"\n Enter Number of student";
    cin>>num;
	Student s[num];
	
	int avg;
	
	
    for(i = 0; i < num;i++ )
	{
    s[i].set();
   
    
   
    
   
    
    }
    ht=s.fun();
    avg = height/num;
    cout << "\nAverage of all student ="<<avg;
}