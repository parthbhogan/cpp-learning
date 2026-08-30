#include<iostream>
using namespace std;
int main(){
    int arr[5]={};
    for(int i=0;i<5;i++){
        cout<<"enter your numbers: ";
        cin>>arr[i];
    }
        int min=arr[0];
        for(int j=0;j<5;j++){
            if( min>arr[j]){
                min=arr[j];
            }
        }
        cout<<min<<" is minimum";
        return 0;
    }
