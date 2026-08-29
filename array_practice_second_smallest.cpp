#include<iostream>
using namespace std;
int main(){
    int arr[7]={};
    for(int i=0;i<7;i++){
        cout<<"enter your numbers: ";
        cin>>arr[i];
    }
    int sml=arr[0];
    int sml2=arr[1];
    for(int j=0;j<7;j++){
        if(arr[j]<sml){
            sml2=sml;
            sml=arr[j];
        }
        else if(arr[j]<sml2&&sml<arr[j]){
            sml2=arr[j];
        }
    }
    cout<<"smallest: "<<sml<<endl;
    cout<<"secound smallest: "<<sml2<<endl;
    return 0;
}