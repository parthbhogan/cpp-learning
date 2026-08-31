#include<iostream>
using namespace std;
int main() {
    int arr[7]={};
    for(int i=0;i<7;i++){
        cout<<"enter your numbers: ";
        cin>>arr[i];
    }
            int smlp=9999;
            for(int j=0;j<7;j++){
                if(arr[j]<smlp&&arr[j]>0){
                    smlp=arr[j];
                }
            }
            cout<<"smallest positive number: "<<smlp;
            return 0;
}