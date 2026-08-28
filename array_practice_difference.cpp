#include<iostream>
using namespace std;
int main(){
    int arr[7]={};
    for(int i=0;i<7;i++){
        cout<<"enter your numbers: ";
        cin>>arr[i];
    }
    int max=arr[0];
    int min=arr[0];
    int diff;
    for(int j=0;j<7;j++){
        if(arr[j]>max){
            max=arr[j];
        }
        if(arr[j]<min){
            min=arr[j];
        }
    }
    diff=max-min;
    cout<<"the difference is: "<<diff;
    return 0;
}