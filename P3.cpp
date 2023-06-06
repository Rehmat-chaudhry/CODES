#include<iostream>
#include<iomanip>
using namespace std;
struct Division{
	double _1sale,_2sale,_3sale,_4sale,avgSale,totalSale;
};
void getSales(Division);
double inputValidation();
int main(){
	Division east,west,south,north;

	//EAST DIVISION
	cout<<"Please Enter Quarterly Sales of of East Division: "<<endl;
	getSales(east);
	cout<<"\nAverage Sale of East Division: "<<east.avgSale<<endl;
	cout<<"Total Sale of East Division: "<<east.totalSale<<endl;
	
	//WEST DIVISION
	cout<<"\n\nPlease Enter Quarterly Sales of of West Division: "<<endl;
	getSales(west);
	cout<<"\nAverage Sale of East Division: "<<west.avgSale<<endl;
	cout<<"Total Sale of East Division: "<<west.totalSale<<endl;
	
	//SOUTH DIVISION
	cout<<"\n\nPlease Enter Quarterly Sales of of South Division: "<<endl;
	getSales(south);
	cout<<"\nAverage Sale of South Division: "<<south.avgSale<<endl;
	cout<<"Total Sale of South Division: "<<south.totalSale<<endl;
	
	//NORTH DIVISION
	cout<<"\n\nPlease Enter Quarterly Sales of of North Division: "<<endl;
	getSales(north);
	cout<<"\nAverage Sale of North Division: "<<north.avgSale<<endl;
	cout<<"Total Sale of North Division: "<<north.totalSale<<endl;

}
void getSales(Division n){
	cout<<"1st Quarter: ";
	n._1sale=inputValidation();
	
	cout<<"2nd Quarter: ";
	n._2sale=inputValidation();
		
	cout<<"3rd Quarter: ";
	n._3sale=inputValidation();
		
	cout<<"4th Quarter: ";
	n._4sale=inputValidation();

	n.totalSale=n._1sale+n._2sale+n._3sale+n._4sale;
	n.avgSale=n.totalSale/4.0;
}
double inputValidation(){
	int i=1;
	double x;
	do{
	cin>>x;
	if(x<0)
	cout<<"Please Enter Value Greater than Zero!"<<endl;
	else
	i=-1;
	}while(i>-1);
	return x;
}
