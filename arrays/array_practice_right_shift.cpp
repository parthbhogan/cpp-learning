#include<iostream>
using namespace std;
int main(){
    int arr[5]={};
    for(int i=0;i<5;i++){
        cout <<"enter your numbers: ";
        cin>>arr[i];
    }
    int arr2[5]={};
    for(int j=0;j<4;j++){
        arr2[j+1]=arr[j];
    }
    arr2[0]=arr[4];
    for(int j=0;j<5;j++){
        cout<<arr2[j]<<" ";
    }
    return 0;
}