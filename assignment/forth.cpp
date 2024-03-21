#include<iostream>
#include<math.h>
using namespace std;

class Triangle
{
    private:
    int a,b,c;
    float s,perimeter,area;

    public:
     
     Tringle(int x,int y,int z)
     {
          a = x;
          b = y;
          c = z;
      
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
    Triangle t(3,4,5);
    t.show();
}