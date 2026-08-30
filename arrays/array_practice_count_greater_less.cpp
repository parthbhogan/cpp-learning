#include<iostream>
using namespace std;
int main(){
    int arr[8]={};
    for(int i=0;i<8;i++){
        cout<<"enter your numbers: ";
        cin>>arr[i];
    }
    int search;
    cout<<"enter a number to compair: ";
    cin>>search;
    int lct=0;
    int gct=0;
    for(int j=0;j<8;j++){
        if(arr[j]>search){
            gct++;
        }
        else if(arr[j]<search){
            lct++;
        }
    }
    cout<<"numbers greater than "<<search<<"are " <<gct<<endl;
    cout<<"numbers less than "<<search<<"are "<<lct<<endl;
    return 0;

}