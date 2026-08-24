#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter a number: ";
cin>>n;
int divsum=0;
int divcount=0;
for(int i = 1;i<=n;i++){
    if(n%i==0){
    cout<<i<<" ";
    divcount++;
    divsum=divsum+i;
    }
}
cout<<"total divisible numbers: "<<divcount<<endl;
cout<<"sum of all divisible numbers: "<<divsum<<endl;
return 0;
}