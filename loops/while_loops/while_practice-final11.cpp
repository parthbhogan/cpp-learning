#include<iostream>
using namespace std;
int main()
    {
int i=1;
int n;
cout<<"enter a number: ";
cin>>n;
int sum=0;
int evencount=0;
int evensum=0;
int oddsum=0;
int oddcount=0;
while(i<=n)
{
sum=sum+i;
if(i%2==0)
{
evensum=evensum+i;
evencount++;
}
else
{
oddcount++;
oddsum=oddsum+i;
}
i++;
}
cout<<"total sum:"<<sum<<endl;
cout<<"sum of even numbers is: "<<evensum<<endl;
cout<<"sou of odd numbers is: "<<oddsum<<endl;
cout<<"even numbers: "<<evencount<<endl;
cout<<"odd numbers: "<<oddcount<<endl;
return 0;
    }
