#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x,pwr,sum=0;
	cout<<"Please Enter a Number : ";
	cin>>x;
	cout<<"Please Enter Power : ";
	cin>>pwr;
	for(int i=1; i<=x; i++)
	{
		sum=pow(i,pwr)+sum;
	}
	cout<<"Sum of All Numbers Raised to Power "<<pwr<<" from 0 to "<<x<<" = "<<sum;
	return 0;
}
