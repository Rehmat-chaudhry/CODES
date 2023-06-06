#include<iostream>
using namespace std;
int main()
{
	float x,y;
	//for storing a specific Operation Character
	char oprtr;
	cout<<"Please Enter First Number : ";
	cin>>x;
	
	cout<<"Please Enter Second Number : ";
	cin>>y;
	
	cout<<"Enter the Symbol of Operation You Want to Peform on Above Entered Numbers \nFor Addition 	   : '+'\nFor Subtraction	   : '-'\nFor Multiplication : '*'\nFor Division	   : '/'\n";
	
	cin>>oprtr;
	
	if(oprtr=='+'||oprtr=='-'||oprtr=='*'||oprtr=='/')
	{
		
		if(oprtr=='+')
	
			cout<<x<<" + "<<y<<" = "<<x+y;
	
		else if(oprtr=='-')
	
			cout<<x<<" - "<<y<<" = "<<x-y;
	
		else if(oprtr=='*')
	
			cout<<x<<" x "<<y<<" = "<<x*y;
	
		else if(oprtr=='/')
			{
				if(y==0)
					cout<<"Denominator is Zero, Please Enter Appropriate Denominator For Division Operation";
				else
					cout<<x<<" / "<<y<<" = "<<x/y;
			
			}
	}
	else
	cout<<"You Haven't Entered a Valid Operator, Please Enter a Valid Operator";
}
