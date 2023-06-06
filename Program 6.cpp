#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x;
	cout<<"Please Enter a Number : ";
	cin>>x;
	for(int i=2; i<=x; i++)
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
