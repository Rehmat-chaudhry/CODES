#include<iostream>
#include<cstring>
using namespace std;
int main(){
	string str1="am";
	string str2="I";
	string str3="Saqlain";
	//Copying String 1 in String 2 & String 2 in String 1
	string temp=str1;
	str1=str2;
	str2=temp;
	cout<<str1<<" "<<str2<<" "<<str3<<endl;
	//Concatenating String 1 & String 2
	str1=str1+str2;
	cout<<str1<<endl;
	//Length After Concatenation
	cout<<str1.length();
}
