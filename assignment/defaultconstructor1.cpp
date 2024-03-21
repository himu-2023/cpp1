#include<iostream>
using namespace std;
class Test
{
	private:
	int a,b,c;
	public:
		//default constructor
		Test()
		{
			a=12;
			b=5;
			c=a*b;
		}
		void show()
		{
			cout<<"\nA="<<a<<"\nB="<<b<<"\nC="<<c;
		}
		
};
main()
{
	Test t1;
	t1.show();
	Test my_test;
	my_test.show();
		
	
}