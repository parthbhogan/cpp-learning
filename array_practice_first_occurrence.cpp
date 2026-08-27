#include<iostream>
using namespace std;
int main(){
    int arr[7]={};
    for(int i=0;i<7;i++){
        cout<<"enter your numbers: ";
        cin>>arr[i];
    }
    int n;
    cout<<"enter your number to search: ";
    cin>>n;
    bool st=false;
    for(int j=0;j<7;j++){
        if(n==arr[j]){
            st=true;
        }
        if(st){
        cout<<"the first occurence of "<<n<<" is at index "<<j;
        break;
    }
    }
    return 0;
}