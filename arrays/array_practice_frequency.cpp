#include<iostream>
using namespace std;
int main(){
    int arr[7]={};
    for(int i=0;i<7;i++){
        cout<<"enter your numbers: ";
        cin>>arr[i];
    }
    for(int j=0;j<7;j++){
        int count=0;
        bool alredy=false;
    for(int p=0; p<j; p++){
        if(arr[j]==arr[p])
        alredy=true;
    }
    
    if(alredy==false){

        for(int k=0;k<7;k++){
            if(arr[j]==arr[k]){
                count++;
            }
        }
            cout<<arr[j]<<"="<<count<<endl;
        }
    }

    return 0;
}