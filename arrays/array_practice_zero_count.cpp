#include<iostream>
using namespace std;
int main(){
    int arr[8]={};
    for(int i=0;i<8;i++){
        cout<<"enter your numbers: ";
        cin>>arr[i];
    }
    int zcount=0;
    for(int j=0;j<8;j++){
        if(arr[j]==0){
            zcount++;
        }
    }
    cout<<"total zero in array: "<<zcount<<endl;
    return 0;
}