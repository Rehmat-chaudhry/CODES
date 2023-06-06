#include<iostream>
using namespace std;
int main()
{
	int x,fact,sum=0;
	cout<<"Enter a Number : ";
	cin>>x;
	fact=1;
	for(int i=1; i<=x; i++)
	{
		fact=fact*i;
		sum=sum+fact;
	}
	cout<<"Sum of all Factorial from 1! to "<<x<<"! = "<<sum;
}
