#include<iostream>
using namespace std;
int main(){
   int arr[7]={};
    for(int i=0;i<7;i++){
    cout<<"enter your numbers: ";
    cin>>arr[i];
    } 
    bool fstrep=false;
    for(int j=0;j<7;j++){
    for(int k=j+1;k<7;k++){
        if(arr[j]==arr[k]){
            fstrep=true;
        }
    }
        if(fstrep==true){
        cout<<"first repeated element: "<<arr[j];
        break;
    }
    }
    return 0;
}