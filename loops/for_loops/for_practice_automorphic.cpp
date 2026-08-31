#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter a number";
cin>>n;
int og=n;
int power=1;
int count=0;
while(n !=0){
    count++;
    power=power*10;
    n=n/10;
}int square=og*og;
int last = square % power;

if (last== og){
    cout<<og<<" is automorphic number";
}
else{
    cout<<og<<" is not an automorphic number";
}
return 0;
}