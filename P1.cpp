#include<iostream>
#include<iomanip>
using namespace std;
struct MovieData{
	string title,director;
	int yrelease,duration;
};
void displayData(MovieData,MovieData);
int main(){
	MovieData hustle={"American Hustle","David O. Russell",2013,138};
	MovieData mask={"The Mask","Chuck Russell",1994,101};
	displayData(hustle,mask);
}
void displayData(MovieData x, MovieData y){
	cout<<"\n  Movie Name"<<setw(5)<<":"<<setw(16)<<x.title<<endl;
	cout<<"  Film Director : "<<x.director<<endl;
	cout<<"  Year Released : "<<x	.yrelease<<endl;
	cout<<"  Running Time"<<setw(3)<<":"<<setw(4)<<x.duration<<" Minutes"<<endl;
	char o='-';
	cout<<"\n\n  Movie Name"<<setw(5)<<":"<<setw(9)<<y.title<<endl;
	cout<<"  Film Director : "<<y.director<<endl;
	cout<<"  Year Released : "<<y.yrelease<<endl;
	cout<<"  Running Time"<<setw(3)<<":"<<setw(4)<<y.duration<<" Minutes"<<endl;

}
