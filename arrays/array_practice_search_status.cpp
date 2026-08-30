#include<iostream>
using namespace std;
int main(){
    int arr[7]={};
    for(int i=0;i<7;i++){
        cout<<"enter your numbers: ";
        cin>>arr[i];
    }
    int n;
    cout<<"enter number to search: ";
    cin>>n;
    bool st=false;
    for(int j=0;j<7;j++){
            if(n==arr[j]){
                st=true;
                cout<<"nuber found!!!,at index "<<j;
                break;
            }
        
    }  
    if(st==false){
        cout<<"number not found!!!";
    }
    return 0;
}