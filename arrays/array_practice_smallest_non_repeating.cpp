#include<iostream>
using namespace std;
int main() {
    int arr[7]={};
    for(int i=0;i<7;i++) {
        cout<<"enter your elements: ";
        cin>>arr[i];
    }
    int sml=9999;
    bool found=false;
    for(int j=0;j<7;j++){
        bool dup=false;
        for(int k=0;k<7;k++){
            if(arr[j]==arr[k]&& j != k){
                dup=true;
            }
        }
        if(dup==false){
            found =true;
            if(arr[j]<sml){
            sml=arr[j];
            }
        }
    }
    if(found ==false){
        cout<<"there are no any non-repeating elements !!!";
    }
    else{
    cout<<"smallest non-repeating element is: "<<sml;
    }
    return 0;
}