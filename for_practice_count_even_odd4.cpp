#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter a number: ";
cin>>n;
int evencount=0;
int oddcount=0;
for(int i=1;i<=n;i++)
{
if(i%2==0)
{
cout<<i<<"is even"<<endl;
evencount++;
}
else{
    cout<<i<<"is odd"<<endl;
    oddcount++;
}

}
cout<<"total even numbers: "<<evencount<<endl;
cout<<"total odd numbers: "<<oddcount<<endl;
return 0;
}