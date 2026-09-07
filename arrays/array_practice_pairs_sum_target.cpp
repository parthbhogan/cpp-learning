#include <iostream>
using namespace std;
int main(){
    int arr[8]={};
    for(int i=0;i<8;i++){
        cout<<"enter elements:";
        cin>>arr[i];
    }
    int target;
    cout<<"enter your target: ";
    cin>>target;
    for(int j=0;j<8;j++){
        for(int k=j+1;k<8;k++){
            if(arr[j]+arr[k]==target){
                cout<<arr[j]<<","<<arr[k]<<endl;
            }
        }
    }
    return 0;
    
}