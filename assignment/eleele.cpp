#include<iostream>
using namespace std;
main()
{
	float p,r,t,si;
	cout<<"\nEnter the principal_amount rate_of_interest and time_period:";
	cin>>p>>r>>t;
      si=(p*r*t)/100;
	cout<<"\nSimple interest is : "<<si;
	
}