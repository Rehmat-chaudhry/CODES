#include<iostream>
#include<cmath>
#define PI 3.14159
using namespace std;
int main()
{
	int r;
	cout<<"Please Enter Radius of a Circle : ";
	cin>>r;
	r=pow(r,2);
	cout<<"Area of Circle = "<<PI*r;
	return 0;
}
