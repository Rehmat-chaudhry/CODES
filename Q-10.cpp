#include<iostream>
using namespace std;
int main()
{
	float a,b;
	cout<<"Please Enter Two Numbers : "<<endl;
	cin>>a>>b;
	if(b>0)
	cout<<a<<" / "<<b<<" = "<<a/b;
	else if(b<0)
	cout<<a<<" * "<<b<<" = "<<a*b;
	else if(b==0)
	cout<<a<<" + "<<b<<" = "<<a+b;
	else
	cout<<"Invalid Choice";
	return 0;
}
