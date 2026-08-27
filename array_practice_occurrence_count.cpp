#include<iostream>
using namespace std;
int main(){
    int arr[7]={};
    for(int i=0;i<7;i++){
        cout<<"enter your numbers: ";
        cin>>arr[i];
    }
    int n;
    cout<<"enter a number to search: ";
    cin>>n;
    int repcount=0;
    for(int j=0;j<7;j++){
        if(n==arr[j]){
            repcount++;
        }
    }
    cout<<"total repetitions: "<<repcount<<endl;
    return 0;
}