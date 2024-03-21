#include<iostream>
#include<math.h>
using namespace std;
main()
{
	float p,r,t,ci,amount;
	cout<<"\nEnter the principal_amount rate_of_interest and time_period:";
	cin>>p>>r>>t;
    amount = p * (pow((1 + r/100), t));
    cout<<"\nAmount is:"<<amount;
    ci = amount - p;
	cout<<"\nCompound interest is : "<<ci;
	
}