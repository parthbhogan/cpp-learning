#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    int og=n;
    int sum=0;
    while(n!=1){
        sum=0;
    while(n!=0){
        int digit=n%10;
        n=n/10;
        sum=sum+digit*digit;
    }
    n=sum;
}
if( n==1){
    cout<<og<<" is a happy number"<<endl;
}
else{
    cout<<og<<" is not happy nuumber"<<endl;
}
return 0;
}