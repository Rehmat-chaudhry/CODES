#include<iostream>
using namespace std;
int main(){
	int x,product=1;
	cout<<"Keep Entering Numbers to Multiply Them All."<<endl;
	cout<<"Enter a Negative Number or '0' to Exit!"<<endl;
	do{
		cin>>x;
		if(x>0){
		product*=x;
		}
		else
		cout<<"You are exiting the program!"<<endl;
	}while(x>0);
	if(product>1)
	cout<<product;
}
