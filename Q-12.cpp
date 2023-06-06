#include<iostream>
using namespace std;
int main()
{
	const float P=0.06;
	float _1=12.95,_2=24.95,_3=6.95,_4=14.95,_5=3.95,_sum,_tax;
	cout<<"Price of Item 1 = "<<_1<<"$"<<endl;
	cout<<"Price of Item 2 = "<<_2<<"$"<<endl;
	cout<<"Price of Item 3 = "<<_3<<"$"<<endl;
	cout<<"Price of Item 4 = "<<_4<<"$"<<endl;
	cout<<"Price of Item 5 = "<<_5<<"$\n"<<endl;
	
	_sum=_1+_2+_3+_4+_5;
	
	cout<<"=======================\n";
	cout<<"|  SubTotal = "<<_sum<<"$  |\n";
	cout<<"=======================\n\n";
	
	cout<<"Sales Tax on Item 1 = "<<_1*P<<"$"<<endl;
	cout<<"Sales Tax on Item 2 = "<<_2*P<<"$"<<endl;
	cout<<"Sales Tax on Item 3 = "<<_3*P<<"$"<<endl;
	cout<<"Sales Tax on Item 4 = "<<_4*P<<"$"<<endl;
	cout<<"Sales Tax on Item 5 = "<<_5*P<<"$\n"<<endl;
	
	_tax=(_1*P)+(_2*P)+(_3*P)+(_4*P)+(_5*P);
	
	cout<<"=======================================\n";
	cout<<"|  Total S.Tax on All Items = "<<_tax<<"$  |\n";
	cout<<"=======================================\n\n";
	
	cout<<"========================================\n";
	cout<<"|  Total After Adding S.Tax = "<<_sum+_tax<<"$  |\n";
	cout<<"========================================\n";
	
	return 0;
	
}
