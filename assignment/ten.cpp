#include <iostream>
using namespace std;
class Volume
{
	private:
    	int l,b,h;
    	int vol;

    public:
        void get()
		{
        cout<<"\n Enter value for length breadth and height";
		cin>>l>>b>>h;
		
        
	
		}
		void show()
		{
		cout<<"\nDimensions of Box are :: \n";
    	cout<<"\nLength of Box :: "<<l<<"\n";
    	cout<<"\nWidth of Box :: "<<b<<"\n";
    	cout<<"\nHeight of Box :: "<<h<<"\n";
    	vol=l*b*h;
    	cout<<"\nVolume of Box :: "<<vol<<"\n";
		}
        
};
 main()
{
    Volume v1;
    v1.get();
    v1.show();
    
}