#include<iostream>
using namespace std;
int main()
{
	long long x,n;
	int i;
	cout<<"Enter Numbers : ";
	cin>>x;
	n=x;	
	for(i=0; x>0; i++)
	{
		x=x/10;
	}
	cout<<"There are "<<i<<" Digits in "<<n;
}
