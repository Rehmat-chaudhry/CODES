#include<iostream>
using namespace std;
int main( ){ 
int x = 2; 
//Creates integer variable named  x and assigns it value 2.
int *p;
p = &x;
*p = 4;
cout << p;
cout << *p;
int fun(int *, int*);

}
