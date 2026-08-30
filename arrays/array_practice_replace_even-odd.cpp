#include<iostream>
using namespace std;
int main(){
    int arr[7]={};
    for(int i=0;i<7;i++){
        cout<<"enter your numbers: ";
        cin>>arr[i];
    }
    for(int j=0;j<7;j++){
        if(arr[j]%2==0){
            arr[j]=0;
        }
        else if(arr[j]%2==1){
            arr[j]=1;
        }
        cout<<arr[j]<<" ";
    }
    return 0;
}