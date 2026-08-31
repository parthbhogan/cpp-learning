#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter a number: ";
cin>>n;
int og=n;
int sum=0;
while(n !=0){
int digit = n%10;
n=n/10;
int factorial =1;
for(int i=1;i<=digit;i++){
    factorial=factorial*i;
}
sum=sum+factorial;
}
if(sum==og){
    cout<<og<<"is a strong number";
}
else{
    cout<<og<<"is not a strong number";
}
return 0;
}