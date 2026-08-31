#include<iostream>
using namespace std;
int main()
{
    int evencount=0;
    int oddcount=0;
    int i=1;
    int n;
    cout<<"enter your nomber: ";
    cin>>n;
   while(i<=n)
   {
    if(i%2==0)
    {
        cout<<i<<"is even"<<endl;
        evencount++;
    }
    else
    {
        cout<<i<<"is odd"<<endl;
        oddcount++;
    }
   i++;
   }
  
   cout<<"total even numbers: "<<evencount<<endl;
   cout<<"total odd numbers: "<<oddcount<<endl;

return 0;
}