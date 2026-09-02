#include<iostream>
using namespace std;
int main(){
    int arr[7]={};
    for(int i =0;i<7;i++){
        cout<<"enter your elements: ";
        cin>>arr[i];
    }
    for(int j=0;j<7;j++){
        bool found=false;
        for(int k=0;k<7;k++){
            if(arr[j]==arr[k]&&j!=k){
                found=true;
            }
        }
        if(found==true){
            cout<<"first repeating element is :"<<arr[j];
            break;
        }
    }
    return 0;
}