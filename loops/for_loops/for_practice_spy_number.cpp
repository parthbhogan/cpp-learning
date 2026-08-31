#include<iostream>
using namespace std;
int main(){
int n;
cout<<" enter a number";
cin>>n;
int sum=0;
int og=n;
int product=1;
while(n !=0){
    int digit=n%10;
    n=n/10;
    sum=sum+digit;
    product=product*digit;
}
if(sum==product){
    cout<<og<<" is a spy number"<<endl;
}
else{
    cout<<og<<" is not a spy number"<<endl;
}
return 0;
}