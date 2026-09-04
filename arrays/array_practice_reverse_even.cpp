#include<iostream>
using namespace std;
int main(){
    int arr[9]={};
    for(int i=0;i<9;i++){
        cout<<"enter elements: ";
        cin>>arr[i];
    }
    int left=0;
    int right=8;
while(left<right){
    for(int j=left;j<right;j++){
        if(arr[j]%2==0){ 
            left=j;
            break;        
        }
    }
    for(int i=right;i>left;i--){
        if(arr[i]%2==0){
            right=i;
            break;

        }
    }
    int temp=arr[left];
    arr[left]=arr[right];
    arr[right]=temp;

    left++;
    right--;
}
}