#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    int sum=0;
    int og=n;
    while(n !=0){
        int digit=n%10;
        n=n/10;
        sum=sum+digit;
    }
    if(og%sum==0){
        cout<<og<<" is a harshad number"<<endl;
    }
    else{
        cout<<og<<" is not a harshad number"<<endl;
    }
    return 0;
}