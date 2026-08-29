#include<iostream>
using namespace std;
int main()
{
int factorial = 1;
int n;
cout<<"enter a number: ";
cin>>n;
for(int i=1;i<=n;i++)
    {
        factorial=factorial*i;
    }
cout<<"factorial: "<<factorial<<endl;

return 0;
}
