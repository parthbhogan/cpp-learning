#include<iostream>
using namespace std;
int main(){
    int arr1[10]={};
    for(int i=0;i<10;i++){
        cout<<"enter element: ";
        cin>>arr1[i];
    }
    int arr2[10]={};
    for(int j=0;j<10;j++){
        cout<<"enter element: ";
        cin>>arr2[j];
    }
    for(int i=0;i<10;i++){
        bool cheaked=false;
        for(int j=0;j<10;j++){
        if(arr1[i]==arr2[j]){
            cheaked=true;
        }
    }
        if(cheaked==true){
        bool alreadyPrinted=false;

        for(int k=0;k<i;k++){
            if(arr1[i]==arr1[k]){
                alreadyPrinted=true;
            }
        }

        if(alreadyPrinted==false){
            cout<<"common numbers: "<<arr1[i]<<",";
        }
    }
}
return 0;
    }

  