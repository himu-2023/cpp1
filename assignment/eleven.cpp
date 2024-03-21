#include <iostream>
#include <string>

using namespace std;

class Employee
{
	int year_of_join;
	string name,address;
public:
	void set(string _name, int _year_of_join, string _address)
	{
		name = _name;
		year_of_join = _year_of_join;
		address = _address;
	}


	void show()
	{
		cout << "\nEmplolyee`s name: " << name;
		cout << "\nEmplolyee`s year of join: " << year_of_join;
		cout << "\nEmplolyee`s address: " << address<<endl;
	}
};

int main()
{
	Employee e;
	e.set("Robert", 1994, "64C - WallsStreat");
	Employee e1;
	e1.set("Sam", 2000, "68D- WallsStreat");
	Employee e2;
	e2.set("John", 1999, "26B- WallsStreat");
	e.show();
	e1.show();
	e2.show();
}