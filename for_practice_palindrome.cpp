#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter a number: ";
cin>>n;
int rev=0;
int og=n;
while(n != 0){
int digit =n%10;
rev=rev*10+ digit;
n=n/10;
}if(rev==og){
    cout<<og<<"is a palindrome";
}
else {
    cout<<og<<"is not a palindrome";
}
return 0;
}