#include<iostream>
using namespace std;
int main(){
    int arr[7]={};
    for(int i=0;i<7;i++){
        cout<<"enter elements: ";
        cin>>arr[i];
    }
    for(int j=0;j<7;j++){
        if(arr[j]==0){


            for(int i=j;i>0;i--){
                int temp=arr[i];
                arr[i]=arr[i-1];
                arr[i-1]=temp;
            }
        }
    }
    for(int j=0;j<7;j++){
        cout<<arr[j];
    }
    return 0;
}