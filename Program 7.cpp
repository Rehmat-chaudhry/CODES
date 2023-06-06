#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x,y;
	cout<<"Enter 1st Number : ";
	cin>>x;
	cout<<"Enter 2nd Number : ";
	cin>>y;
	if(x==1)
	x++;
	if(x==0)
	x+=2;
	for(int i=x; i<=y; i++)
    {   
		bool a=false;
        for(int j=2; j<=sqrt(i); j++)
        {   
			if(i%j==0)
        	a=true;
        }
        if(a==false)
		cout<<" ["<<i<<"] ";
    }
    return 0;
}
