#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter a Number to Check Whether its Even or Odd : ";
	int x;
	cin>>x;
	if(x%2==0 && x!=0)
	cout<<x<<" is Even Number";
	else if(x%2!=0)
	cout<<x<<" is Odd Number";
	else
	cout<<x<<" is Neither Odd Nor Even";
	return 0;
}
