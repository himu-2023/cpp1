#include<iostream>
using namespace std;
class Student{
	public:
		int avgmark, rollno=0;
	void set(){
		cout<<"\nenter average marks";
		cin>>avgmark;
		rollno++;
	}
	void get(){
		int rollno;
		cout<<"\nroll_no="<<rollno<<"      Average Marks="<<avgmark;
	}
};
main(){
Student s[8];
int i;
for(i=0;i<8;i++){
	s[i].set();
}
for(i=0;i<8;i++){
	s[i].get();
}
}
