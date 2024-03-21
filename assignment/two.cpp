#include<iostream>
using namespace std;
class Student
{
	private:
	int	rollno,phoneno;
	string name,address;
	public:
		void set(string s,int p,int q,string r)
		{
			
			
			name=s;
			rollno=p;
			phoneno=q;
			address=r;
			
			
		}
		void show()
		{
			cout<<"\n Name is" << name<<"\nRollNumber is "<< rollno<<"\n PhoneNumber is "<< phoneno<<"\nAddress is "<< address;
		}
};
main()
{
	Student s1,s2;
	cout<<"\n Detail of Student";
	s1.set("Sam",22,9834567898,"Nashik");
	s1.show();
	
	s2.set("John",44,9836567888,"Nagpur");
	s2.show();
}