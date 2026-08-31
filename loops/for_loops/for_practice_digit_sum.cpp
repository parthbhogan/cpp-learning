#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a nnumber: ";
    cin>>n;
    int sum=0;
    while(n != 0){
int digit=n%10;
n=n/10;
sum=sum+digit;
    }
    cout<<sum<<endl;
    return 0;


}