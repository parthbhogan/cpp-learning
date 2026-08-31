#include<iostream>
using namespace std;
int main()
{
for(int row=5;row>=1;row--)
{
    for(int i=1;i<=row;i++)
    {
        cout<<"* ";
    }
    cout<<endl;
}
return 0;
}