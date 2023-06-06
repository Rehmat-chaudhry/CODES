#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x,sqrt;
	cout<<"Please Enter a Number : ";
	cin>>x;
	sqrt=pow(x,2);
	if(x!=0)
	{
		for(int i=1; i<=x; i++)
		{
			if(x%i==0 && sqrt%i==0)
			cout<<x<<" & its Square "<<sqrt<<" is divisible by "<<i<<endl;
		}
	}
	else
	cout<<"Please Enter a Non Zero Value!";
}
