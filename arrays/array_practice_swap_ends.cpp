#include<iostream>
using namespace std;
int main(){
    int arr[6]={};
    for(int i=0;i<6;i++){
        cout<<"enter your numbers: ";
        cin>>arr[i];
    }
    int temp=arr[0];
   arr[0]=arr[5];
   arr[5]=temp;
    for(int j=0;j<6;j++){
       cout<<arr[j]<<" ";
    }
    return 0;
}