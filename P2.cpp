#include<iostream>
#include<iomanip>
using namespace std;
struct MovieData{
	string title,director;
	int yearReleased,duration;
	float budget,boxOffice;
};
void displayData(MovieData,MovieData);
int main(){
	MovieData hustle={"American Hustle","David O. Russell",2013,138,40,251.2};
	MovieData mask={"The Mask","Chuck Russell",1994,101,18,351.6};
	displayData(hustle,mask);
}
void displayData(MovieData x, MovieData y){
	cout<<"\n  Movie # 1"<<endl;
	cout<<"\n  Movie Name"<<setw(5)<<":"<<setw(16)<<x.title<<endl;
	cout<<"  Film Director : "<<x.director<<endl;
	cout<<"  Year Released : "<<x.yearReleased<<endl;
	cout<<"  Running Time"<<setw(3)<<":"<<setw(4)<<x.duration<<" Minutes"<<endl;
	cout<<"  Budget"<<setw(9)<<":"<<setw(3)<<x.budget<<" Million USD"<<endl;
	cout<<"  Box Office"<<setw(5)<<":"<<setw(6)<<x.boxOffice<<" Million USD"<<endl;
	cout<<"  Profit"<<setw(9)<<":"<<setw(6)<<x.boxOffice-x.budget<<" Million USD"<<endl;
	cout<<"\n  Movie # 2";	
	cout<<"\n\n  Movie Name"<<setw(5)<<":"<<setw(9)<<y.title<<endl;
	cout<<"  Film Director : "<<y.director<<endl;
	cout<<"  Year Released : "<<y.yearReleased<<endl;
	cout<<"  Running Time"<<setw(3)<<":"<<setw(4)<<y.duration<<" Minutes"<<endl;
	cout<<"  Budget"<<setw(9)<<":"<<setw(3)<<y.budget<<" Million USD"<<endl;
	cout<<"  Box Office"<<setw(5)<<":"<<setw(6)<<y.boxOffice<<" Million USD"<<endl;
	cout<<"  Profit"<<setw(9)<<":"<<setw(6)<<y.boxOffice-y.budget<<" Million USD"<<endl;

}
