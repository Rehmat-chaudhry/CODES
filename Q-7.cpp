#include<iostream>
using namespace std;
int main()
{
	float f,c;
	cout<<"Please Enter Temperature in Fahrenheit : ";
	cin>>f;
	c=5*((f-32)/9);
	cout<<"Temperature in Centigrade = "<<c<<" C";
	return 0;
}
