#include<iostream>
using namespace std;
int main(){
    int arr[7]={};
        for(int i=0;i<7;i++){
            cout<<"enter your numbers";
            cin>>arr[i];
        }
    int oddcount=0;
    bool odd=false;
    for(int j=0;j<7;j++){
            if(arr[j]%2==1){
                oddcount++;
            }
    }    
cout<<"total odd numbers "<<"="<<oddcount;
return 0;
}