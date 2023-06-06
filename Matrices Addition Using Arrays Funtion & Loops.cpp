#include<iostream>
#include<iomanip>
using namespace std;
//Function Prototyping
void addition(int [2][2], int [2][2], int [2][2]);

int main(){
	//Declaring & Initializing Arrays
	int A[2][2]={{2,1},{5,9}};
	int B[2][2]={{3,8},{8,3}};
	int C[2][2];
	
	//Calling Function & Passing Arrays as References
	addition(A,B,C);
	//Displaying Resulting Matrix in main Function After Addition of Two Matrices
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			cout<<C[i][j]<<setw(4);
		}
		cout<<"\n";
	}
}
void addition(int a[2][2],int b[2][2], int c[2][2]){
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
}
