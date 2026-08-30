#include<iostream>
using namespace std;
int main(){
    int arr[7]={};
        for(int i=0;i<7;i++){
        cout<<"enter your numbers: ";
        cin>>arr[i];
    }
    int max=arr[0];
    int sec=arr[1];
    for(int j=0;j<7;j++){
        if(arr[j]>max){
            sec=max;
            max=arr[j];
            
        }
        else if(sec<arr[j]){
            sec=arr[j];
        }
    }
    cout<<"largest number: "<<max<<endl;
    cout<<"secound largest number: "<<sec<<endl;
    return 0;
}