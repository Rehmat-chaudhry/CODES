#include<iostream>
using namespace std;
int main()
{
	int k;
	cout<<"Enter a Number : ";
	cin>>k;
	for(int i=1; i<=k; i++)
	{
		cout<<i<<" Raised to Power "<<i<<" = "<<i*i<<endl;
	}
	return 0;
}
