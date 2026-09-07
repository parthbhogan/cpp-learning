#include<iostream>
using namespace std;
int main(){
    int arr[9]={};
    for(int i=0;i<9;i++){
        cout<<"enter array elements: ";
        cin>>arr[i];
    }
    int target;
    cout<<"enter target: ";
    cin>>target;
    int paircount=0;
    for(int j=0;j<9;j++){
        for(int k=j+1;k<9;k++){
            if(arr[j]+arr[k]==target){
                paircount++;
            }
        }
    }
    cout<<"total pairs: "<<paircount;
    return 0;

}