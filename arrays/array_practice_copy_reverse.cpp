#include<iostream>
using namespace std;
int main(){
    int arr1[5]={};
    for(int i=0;i<5;i++){
        cout<<"enter your number: ";
        cin>>arr1[i];
    }
        int arr2[5]={};
    for(int j=0;j<5;j++){
            arr2[j]=arr1[4-j];
    }
    for(int j=0;j<5;j++){
        cout<<arr2[j]<<" ";
    }
    return 0;
}