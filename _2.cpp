#include<iostream>
using namespace std;
int main(){
	float series=1,x=0;
	do{
		x+=2.0;
		series=(series)+(1.0/x);
	}while(x<=100);
	cout<<series;
}
