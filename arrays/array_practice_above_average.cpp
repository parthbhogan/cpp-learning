#include<iostream>
using namespace std;
int main(){
    int arr[7]={};
    for(int i=0;i<7;i++){
        cout<<"enter your numbers: ";
        cin>>arr[i];
    }
    float sum=0;
    int count=0;
    float avg;
    for(int j=0;j<7;j++){
        sum=sum+arr[j];
    }
    avg=sum/7;
    for(int j=0;j<7;j++){
        if(arr[j]>avg){
            count++;
        }
    }
    cout<<"Numbers above average"<<" = "<<count;
    return 0;
}