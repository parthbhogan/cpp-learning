#include<iostream>
using namespace std;
int main(){
    int arr[5]={};
    for(int i=0;i<5;i++){
        cout<<"enter your numbers";
        cin>>arr[i];
    }
    int evencount=0;
    for(int j=0;j<5;j++){
        if(arr[j]%2==0){
            evencount++;
        }
    }
    cout<<"total even numbers "<<"="<<evencount;
    return 0;
}