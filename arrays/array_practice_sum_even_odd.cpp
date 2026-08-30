#include<iostream>
using namespace std;
int main(){
    int arr[9]={};
    for(int i=0;i<9;i++){
        cout<<"enter your numberss: ";
        cin>>arr[i];
    }
    int oddsum=0;
    int evensum=0;
    for(int j=0;j<9;j++){
        if(arr[j]%2==0){
            evensum=evensum+arr[j];
        }
        else{
            oddsum=oddsum+arr[j];
        }
    }
    cout<<"sum of even numbers: "<<evensum<<endl;
    cout<<"sum of odd numbers: "<<oddsum<<endl;
    return 0;
}