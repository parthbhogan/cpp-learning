#include<iostream>
using namespace std;
int main(){
    int arr[5]={};
    for(int i=0;i<5;i++){
        cout<<"enter your number: ";
        cin>>arr[i];
    }
    float avg;
    int sum=0;
    for(int j=0;j<5;j++){
            sum=sum+arr[j];
    }
                avg=sum/5;
                cout<<"average"<<" = "<<avg;
                return 0;
}