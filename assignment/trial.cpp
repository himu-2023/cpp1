#include <iostream>
using namespace std;

class Area
{
	private:

         int length;
         int breadth;

    public:
   
        Area() {
        	cout<<"\n Enter the length and breadth ";
        	cin>>length>>breadth;
            
    }
    

    
    int returnArea() {
        return (length * breadth);
    }
};
main()
{
	Area a,a1;
	a.setDim();
	
	a.getArea();
	cout<<"\nArea of Rectangle is "<<a.getArea();
	
	//a1.setDim();
	//cout<<"\nArea of Rectangle is "<<a1.getArea();
	//a1.getArea();
}