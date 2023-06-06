#include<iostream>
using namespace std;
struct MonthData{
	float tRainfall,hTemp,lTemp,aTemp;
};
float inputValidation();
float highTemp(MonthData* []);
int lowTemp();
int main(){
	MonthData arr[12];
    for(int i=0; i<12; i++){
        cout<<"\nData for Month # "<<i+1<<"\n";
        cout<<"\nPlease Enter Rainfall:";
        cin>>arr[i].tRainfall;
        cout<<"Please Enter Highest Temperature of This Month: ";
        arr[i].hTemp=inputValidation();
        cout<<"Please Enter Lowest Temperature of This Month: ";
        arr[i].lTemp=inputValidation();
        arr[i].aTemp=((arr[i].hTemp)+(arr[i].lTemp))/2;
    }
    float sum;
    for(int i=0; i<12; i++){
    	sum+=arr[i].tRainfall;
	}
	float aRain=sum/12;
	
	highTemp(&arr[]);
}
float inputValidation(){
    int i=1;
    float x;
    do{
        cin>>x;
        if(x<-100 || x>140)
            cout<<"Please Enter Value Between this Range [-100 to 140]"<<endl;
        else
            i=-1;
    }while(i>-1);
    return x;
}

float highTemp(MonthData *parr[]){
	float max;
	max=arr[0]->hTemp;
	for(int i=0; i<12; i++){
		if(arr[i]->hTemp>max)
		max=arr[i]->hTemp;
	}
	return max;
}
