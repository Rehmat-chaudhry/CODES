#include<iostream>
using namespace std;
void increment( ){ 
    static int i = 1 ; 
    cout<< i  ; 
    i = i + 1 ; 
}
int main( ){ 
    increment() ; 
    increment() ; 
    increment() ; 
}
