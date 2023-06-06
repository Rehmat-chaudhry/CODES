#include<iostream>
using namespace std;
int highestInArray(int [2][2]);
int main(){
	cout<<"Please Enter Numbers 4 Numbers : ";
	int A[2][2];
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			cin>>A[i][j];
		}
	}
	cout<<"\nHighest Number From Entered Numbers = "<<highestInArray(A);
}
int highestInArray(int a[2][2]){
	int max=a[0][0];
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			if(a[i][j]>max){
				max=a[i][j];
			}
		}
	}
	return max;
}
