#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;

public:
    // Constructor to initialize length and breadth
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }#include<iostream>
#include<math.h>
using namespace std;

class Triangle
{
    private:
    int a,b,c,perimeter;
    float s,area;

    public:
     
     void get()
     {
          a = 3;
          b = 4;
          c = 5;
      
      cout<<"\n Area of Triangle ";
      
       s = (a+b+c)/2;

       area =sqrt(s*(s-a)*(s-b)*(s-c)); 
        
       cout<<"\n Perimeter of triangle "; 
       perimeter= a+b+c; 
       //cout<<"\n Area of Triangle ";
      
      // s = (a+b+c)/2;

       //area= sqrt(s*(s-a)*(s-b)*(s-c)); 
     }

     void show()
     {
       cout<<"\n Area of triangle is "<<area;
       cout<<"\n perimeter of triangle is "<<perimeter;

     }
};
main()
{
    Triangle t;
    
    //int a = 3, b = 4;  c = 5;
    
     t.get();

    t.show();
}
    

    // Function to calculate area
    int Area() {
        return length * breadth;
    }
};
main()
{
	Rectangle r(4,5);
	r.Area();
	cout<<"\nArea of Rectangle is "<< r.Area();
	
	Rectangle r1(5,8);
	r1.Area();
	cout<<"\nArea of Rectangle is "<< r1.Area();
	
}