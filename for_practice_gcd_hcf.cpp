#include<iostream>
using namespace std;
int main()
{
int a,b;
cout<<"enter two numbers:  ";
cin>>a>>b;
int gcd=0;

for(int i=1;i<=a&&i<=b;i++){
    if(a%i==0&&b%i==0)
    gcd=i;
    }
cout<<"gcd: "<<gcd<<endl;
return 0;

}