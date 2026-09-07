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
    int l = left;
    int r = right;
    while(l < right && arr[l] % 2 == 0  ){
    l++;
    }

    while(r > left && arr[r] % 2 == 0){
    r--;
    }
    if(l < r){
    int temp = arr[l];
    arr[l] = arr[r];
    arr[r] = temp;

    left = l + 1;
    right = r - 1;
}
else{
    break;
}
    }
for(int i=0;i<9;i++){
    cout<<arr[i]<<" ";
}
return 0;
}