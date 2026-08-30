#include<iostream>
using namespace std;
int main(){
    int arr[7]={};
    for(int i=0;i<7;i++){
        cout<<"enter your numbers: ";
        cin>>arr[i];
    }
    int cmp;
    cout<<"enter comparable value: ";
    cin>>cmp;
    int gcount=0;
    for(int j=0;j<7;j++){
        if(arr[j]>cmp){
            gcount++;
        }
    }
    cout<<"total numbers which are greater than "<<cmp<<"="<<gcount<<endl;
    return 0;
}