#include<iostream>
using namespace std;
int main(){
    int arr[7]={};
    for(int i=0;i<7;i++){
        cout<<"enter elements: ";
        cin>>arr[i];
    }
    int max=arr[0]+arr[1];
    int fstnum=arr[0];
    int secnum=arr[1];
    for(int j=0;j<7;j++){
        for(int k=j+1;k<7;k++){
            if(arr[j]+arr[k]>max){
                max=arr[j]+arr[k];
                fstnum=arr[j];
                secnum=arr[k];
            }
        }
    }
    cout<<"largest pair: "<<fstnum<<","<<secnum<<endl;
    cout<<"sum: "<<max;
    return 0;
}