#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"[1] Cube\n";
	cout<<"[2] Cuboid\n";
	cout<<"[3] Cylinder\n";
	cout<<"[4] Sphere\n";
	cout<<"[5] Exit\n\n";
	cout<<"Please Select a Number from Above MENU : \n";
	cin>>a;
	if(a==1)
	{
		cout<<"\nFollowing is your Selected Choice :"<<endl;
		cout<<"[1] Cube";
	}
	else if(a==2)
	{
		cout<<"\nFollowing is your Selected Choice :"<<endl;
		cout<<"[2] Cuboid";
	}
	else if(a==3)
	{
		cout<<"\nFollowing is your Selected Choice :"<<endl;
		cout<<"[3] Cylinder";
	}
	else if(a==4)
	{
		cout<<"\nFollowing is your Selected Choice :"<<endl;
		cout<<"[4] Sphere";
	}
	else if(a==5)
	{
		cout<<"\nFollowing is your Selected Choice :"<<endl;
		cout<<"[5] Exit";
	}
	else
	cout<<"\nInvalid Choice";
	return 0;
}
