#include<iostream>
using namespace std;
int main() {
    int arr[7]={};
    for(int i=0;i<7;i++){
        cout<<"enter your numbers: ";
        cin>>arr[i];
    }
    for(int j=0;j<7;j++){
            int repcnt=0;
        for(int k=0;k<7;k++){
            if (arr[j]==arr[k]){
                repcnt++;
            }
            
        }
        if(repcnt==1){
            cout<<"first non repeating element is: "<<arr[j];
            break;
        }
    }
    return 0;
}