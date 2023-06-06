#include<iostream>
#include<iomanip>
using namespace std;
//Function Prototyping
void multiply(int [2][2], int [2][2], int [2][2]);

int main(){
	int A[2][2]={{3,2},{2,9}};
	int B[2][2]={{7,5},{3,4}};
	int C[2][2]={{0,0},{0,0}};
	
	//Calling Function
	multiply(A,B,C);
	
	cout<<"Elements of Set 'A' :\n\n";
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			cout<<A[i][j]<<setw(5);
		}
	cout<<"\n";
	}
	cout<<"\nElements of Set 'B' :\n\n";
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			cout<<B[i][j]<<setw(5);
		}
	cout<<"\n";
	}
	cout<<"\nProduct of Set A & B :\n\n";	
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			cout<<C[i][j]<<setw(5);
		}
	cout<<"\n";
	}
	return 0;
}
void multiply(int a[][2],int b[][2], int c[][2]){
	int row=0;
	//Multiplying First Row of Set A To First Column of Set B
	for(int y=0; y<2; y++){
		c[0][0]+=a[row][y]*b[y][row];
	}	
	row=0;
	//Multiplying First Row of Set A To Second Column of Set B
	for(int y=0; y<2; y++){
		c[0][1]+=a[row][y]*b[y][row+1];
	}
	row=1;
	//Multiplying Second Row of Set A To First Column of Set B
	for(int y=0; y<2; y++){
		c[1][0]+=a[row][y]*b[y][row-1];
	}
	row=1;
	//Multiplying Second Row of Set A To Second Column of Set B
	for(int y=0; y<2; y++){
		c[1][1]+=a[row][y]*b[y][row];
	}
	
}
