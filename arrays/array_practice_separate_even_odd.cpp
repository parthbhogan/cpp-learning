#include<iostream>
using namespace std;
int main() {
    int arr[8]={};
    for(int i=0;i<8;i++){
        cout<<"enter elements: ";
        cin>>arr[i];
    }
    for(int j=0;j<8;j++){
        if(arr[j]%2==0){

            for(int k=j;k>0;k--){
                int temp=arr[k];
                arr[k]=arr[k-1];
                arr[k-1]=temp;
            }
        }
    }
    for(int l=0;l<8;l++){
        cout<<arr[l]<<" ";
    }
    return 0;
}
