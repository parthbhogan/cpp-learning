#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter a number: ";
cin>>n;
bool isprime = true;
for(int i = 2;i<n;i++)
{
if(n%i==0){
    isprime=false;
}
}
if(isprime)
{
    cout<<n<<" : is prime"<<endl;
}
else{
    cout<<n<< ": not prime"<<endl;
}
return 0;


}