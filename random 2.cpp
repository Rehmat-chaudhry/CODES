#include <iostream>
using namespace std;

int doSomething(int* x, int* y)
{
	int temp=*x;
	*x=*y * 10;
	*y=temp * 10;
	return *x+*y;
}

int main()
{
	int x,y;
	cout<<"Enter First Number : ";
	cin>>x;
	cout<<"Enter Second Number : ";
	cin>>y;
	cout<<doSomething(&x,&y)<<endl;
	system("Pause");
	return 0;
}
