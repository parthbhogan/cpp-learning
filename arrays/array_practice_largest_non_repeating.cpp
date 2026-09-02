#include<iostream>
using namespace std;
int main(){
    int arr[7]={};
    for(int i=0;i<7;i++){
        cout<<"enter your numbers: ";
        cin>>arr[i];
    }
    int largest=-9999;
    bool found=false;
    for(int j=0;j<7;j++){
        bool rep=false;
        for(int k=0;k<7;k++){
            if(arr[j]==arr[k] && j != k){
                rep=true;
            }
        }
        if(rep==false){
            found=true;
            if(arr[j]>largest){
                largest=arr[j];
            }
        }
    }
    if(found==false){
        cout<<"there are no any non-repeating elements !!!";
    }
    else{
        cout<<"largest non-repeating element is: "<<largest;
    }
    return 0;
}