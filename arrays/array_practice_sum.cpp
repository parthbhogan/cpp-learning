#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of element: ";
    cin>>n;
    int arr[100]={};
    for(int i=0;i<n;i++)
    {
        cout<<"enter your numbers: ";
        cin>>arr[i];
    }
    int sum=0;
    for(int j=0;j<n;j++){
        arr[j];
        sum=sum+arr[j];
    }
cout<<"sum of your numbers: "<<sum<<endl;
return 0;
}