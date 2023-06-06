#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x,sqrt;
	cout<<"Please Enter a Number : ";
	cin>>x;
	x=x+1;
	for(int i=1; i<=x; i++)
	{
		cout<<i<<" Raise to Power "<<x<<" = "<<pow(i,x)<<endl;
	}
}
