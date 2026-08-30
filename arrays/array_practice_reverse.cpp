#include<iostream>
using namespace std;
int main(){
    int arr[7]={};
    for(int i=0;i<7;i++){
        cout<<"enter your numbers to reverse: ";
            cin>>arr[i];
    }
    for(int j=6;j>=0;j--){
        cout<<arr[j]<<" ";
    }
    return 0;
}