#include<iostream>
using namespace std;
int main(){
    int arr[7]={};
    for(int i=0;i<7;i++){
        cout<<"enter your elements: ";
        cin>>arr[i];
    }
    int highest= -1;
    int mostfreq;
    for(int j=0;j<7;j++){
        int repcnt=0;
        for(int k=0;k<7;k++){
            if(arr[j]==arr[k]){
                repcnt++;

            }

        }
        if(repcnt > highest){
            highest = repcnt;
            mostfreq = arr[j];
}

    }
    cout<<"most frequent element: "<<mostfreq<<endl;
    cout<<"frequency: "<<highest;
    return 0;
}