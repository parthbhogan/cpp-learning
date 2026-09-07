#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the range: ";
    cin>>n;

    int arr[100]={};
    for(int i=0;i<n-1;i++){
        cout<<"enter 1 to "<<n<<" elements: ";
        cin>>arr[i];
    }

    for(int i=1;i<=n;i++){
        bool found=false;

        for(int j=0;j<n-1;j++){
            if(arr[j]==i){
                found=true;
            }
        }

        if(found==false){
            cout<<"missing element: "<<i;
        }
    }

    return 0;
}