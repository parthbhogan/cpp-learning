#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter a  number: ";
cin>>n;
int sum=0;
int evensum=0;
int oddsum=0;
int evencount=0;
int oddcount=0;
for(int i=1;i<=n;i++){
        if(i%2==0){
        evencount++;
        evensum=evensum+i;
        }
        else{
            oddcount++;
            oddsum=oddsum+i;
        }
sum=sum+i;
}
cout<<"total sum: "<<sum<<endl;
cout<<"sum of even numbers: "<<evensum<<endl;
cout<<"sum of odd numbers: "<<oddsum<<endl;
cout<<"total even numbers: "<<evencount<<endl;
cout<<"total odd numbers: "<<oddcount<<endl;
return 0;
}