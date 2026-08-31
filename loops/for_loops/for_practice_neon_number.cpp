#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter a number";
cin>>n;
int sum=0;
int square=n*n;
while(square !=0)
{
 int digit=square%10;
 square=square/10;
 sum=sum+digit;
}
if (n==sum){
    cout<<n<<" is a neon number"<<endl;
}
else{
    cout<<n<<" is not a neon number"<<endl;
}
return 0;
}