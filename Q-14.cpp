#include<iostream>
using namespace std;
int main()
{
	int crtn;
	
	float ltr,n_cost,profit;
	
	cout<<"Enter the Amount of Milk in [Liters] Produced in the Morning : ";
	
	cin>>ltr;

	//carton storing capacity
	crtn=ltr/3.78;
	if(crtn==0)
	crtn=1;
	//producing cost
	n_cost=ltr*0.38;

	//profit
	profit=ltr*0.27;

	cout<<"\nCartons Needed to hold "<<ltr<<" Liters of Milk are : "<<crtn<<" Cartons\n\n";
	
	cout<<"Cost of Producing "<<ltr<<" Liters of Milk is : "<<n_cost<<"$\n\n";
	
	cout<<"Profit on "<<ltr<<" Liters of Milk is : "<<profit<<"$\n";

	return 0;
}
