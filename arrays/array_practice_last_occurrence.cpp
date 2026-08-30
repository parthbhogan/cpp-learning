#include<iostream>
using namespace std;
int main(){
    int arr[7]={};
    for(int i=0;i<7;i++){
        cout<<"enter your numbers: ";
        cin>>arr[i];
    }
    int num;
    int index;
    cout<<"enter number to search: ";
    cin>>num;
    for(int j=0;j<7;j++){
        if(num==arr[j]){
            index=j;
        }
    }
    cout<<"last occurence at index: "<<index;
    return 0;
}