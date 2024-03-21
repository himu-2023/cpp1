#include<iostream>
using namespace std;
class Area{
	public:
		int len,b;
		
	Area(int l, int bd)
	   {
       		 len = l;
       		 b= bd;
            }
	void	area(){
		cout<<"Enter the length and breadth : ";
		cin>>len >>b;
			
		}
		void returnArea(){
			cout<<"Area is: "<<len*b;
		}
};
int main(){
	int l ,bb;
	Area A(l,bb);
	A.area();
	A.returnArea();
}