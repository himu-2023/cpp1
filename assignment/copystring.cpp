#include<iostream>
using namespace std;
int main()
{
	string name="c++";
	cout<<"\nlanguage"<<name<<"\nTotal no of characters"<<name.length();
	string name1=name;
	cout<<"\nLanguage:"<<name1;
	cout<<"\nlanguage"<<name<<"\nTotal capacity"<<name.capacity();
	return 0;
}