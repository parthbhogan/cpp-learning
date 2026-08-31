#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter a number: ";
cin>>n;
int og = n;
int sum=0;
while(n !=0)
{
int digit= n% 10;
sum=sum + digit * digit * digit;
n =n/10;
} 
if(sum==og)
{cout<<og<<"is an armstrong number"<<endl;}
else{
    cout<<og<<"is not an armstron number"<<endl;
}
return 0;
}




