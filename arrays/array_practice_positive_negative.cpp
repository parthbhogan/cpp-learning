#include<iostream> 
using namespace std; 
int main(){ 
    int arr[7]={}; 
    for(int i=0;i<7;i++){ 
        cout<<"enter your numbers: "; 
        cin>>arr[i]; 
    } 
    int pcount=0; 
    int ncount=0; 
    for(int j=0;j<7;j++){ 
            if(arr[j]>0){ 
                pcount++;  
            } 
                else if(arr[j]<0){
                        ncount++; 
            } 
    } 
    cout<<"total positive numbers "<<"="<<pcount<<endl; 
    cout<<"total negetive numbers "<<"="<<ncount; 
    return 0; 
}