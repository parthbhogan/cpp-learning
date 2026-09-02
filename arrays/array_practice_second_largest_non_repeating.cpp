#include<iostream>
using namespace std;
int main(){
    int arr[7]={};
    for(int i=0;i<7;i++){
        cout<<"enter your numbers: ";
        cin>>arr[i];
    }
    int largest=-9999;
    int secl=-9998;
    int nrepcnt=0;
    for(int j=0;j<7;j++){
        bool rep=false;
        for(int k=0;k<7;k++){
            if(arr[j]==arr[k]&& j!= k){
                rep=true;
            }
        }
        if(rep==false){
            nrepcnt++;
            if(arr[j]>largest ){
                secl=largest;
                largest=arr[j];
            }
            else if(arr[j] > secl){
                secl = arr[j];
            }
        }
    }
    if(nrepcnt < 2){
        cout<<"there are not enough non-repeating elements !!";
    }
    else{
        cout<<"second largest non-repeating element is: "<<secl;
    }
    return 0;
}