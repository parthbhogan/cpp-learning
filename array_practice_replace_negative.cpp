#include<iostream>
using namespace std;
int main(){
    int arr[7]={};
    for(int i=0;i<7;i++){
        cout<<"enter your numbrs: ";
        cin>>arr[i];
    }
    for(int j=0;j<7;j++){
        if(arr[j]<0){
            arr[j]=0;
        }
        cout<<arr[j]<<" ";
    }
    return 0;
}