#include<iostream>
using namespace std;
class Student
{
	public:
	string name;
	int roll_no;
};
main()
{
	Student obj;
	obj.name="John";
	obj.roll_no=2;
	cout<<"\n Student name is "<<obj.name;
	cout<<"\n Roll Numbur is "<<obj.roll_no;
	
}