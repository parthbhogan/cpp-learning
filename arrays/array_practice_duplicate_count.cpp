#include<iostream>
using namespace std;
int main(){
    int arr[7]={};
    for(int i=0;i<7;i++){
        cout<<"enter your numbers: ";
        cin>>arr[i];
    }
    int repcnt=0;
for(int j=0;j<7;j++){
    bool alreadySeen=false;
    bool hasduplicate=false;
    for(int p=0;p<j;p++){
        if(arr[p]==arr[j]){
            alreadySeen=true;
        }
    }
    if(alreadySeen==false){
        for(int k=0;k<7;k++){
            if(arr[j]==arr[k]&&j!=k){
                hasduplicate=true;
                } 
            }
                if (hasduplicate==true){
                repcnt++;
    }
}
    
}
    cout<<"duplicate values: "<<repcnt;
    return 0;
}
