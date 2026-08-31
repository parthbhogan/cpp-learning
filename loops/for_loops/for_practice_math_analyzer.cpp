#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter a number: ";
cin>>n;
int sqsum=0;
int sum=0;
int divsum=0;
int divcount=0;
for(int i=1;i<=n;i++)
{
sum=sum+i;
sqsum=sqsum+i*i;
if(i%3==0){
    divsum=divsum+i;
    divcount++;
    }
}
cout<<"The count of numbers divisible by 3 is: "<<divcount<<endl;
cout<<"The sum of numbers divisible by 3 is: "<<divsum<<endl;
cout<<"the sum of all numbers is: "<<sum<<endl;
cout<<"the sum of square of number is: "<<sqsum<<endl;
return 0;

}