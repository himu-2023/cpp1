
#include<iostream>
using namespace std;
class Complex{
public:
    int real;
    int imag;
     /* Function to set the values of
      * real and imaginary part of each complex number
      */
     void setvalue()
    {
        cin>>real;
        cin>>imag;
    }
	/* Function to display the sum of two complex numbers */
    void display()
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
	/* Function to add two complex numbers */
 
    void sum(Complex c1, Complex c2)
    {
        real=c1.real+c2.real;
        imag=c1.imag+c2.imag;
    }
  //  Function to display the diff of two complex numbers 
    void show()
    {
        cout<<real<<"-"<<imag<<"i"<<endl;
    }
	// Function to minus two complex numbers 
 
    void diff(Complex c1, Complex c2)
    {
        real=c1.real-c2.real;
        imag=c1.imag-c2.imag;
    }void mult()
    {
        cout<<real<<"*"<<imag<<"i"<<endl;
    }
	// Function to subtract two complex numbers 
 
    void multiply(Complex c1, Complex c2)
    {
        real=c1.real*c2.real;
        imag=c1.imag*c2.imag;
    }
    
    
    
    
    
    
    
};
int main()
    {
        Complex c1,c2,c3;
        cout<<"Enter real and imaginary part of first complex number"<<endl;
        c1.setvalue();
        cout<<"Enter real and imaginary part of second complex number"<<endl;
        c2.setvalue();
        cout<<"Sum of two complex numbers is"<<endl;
        c3.sum(c1,c2);
        c3.display();
        cout<<"difference of two complex numbers is"<<endl;
        //c2.show();
        c3.diff(c1,c2);
        c3.show();
       // c3.display();
        cout<<"Multiplication of two complex numbers is"<<endl;
        c3.multiply(c1,c3);
        c3.mult();
        //c3.display();
    return 0;
    }