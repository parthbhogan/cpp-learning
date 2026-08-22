#include<iostream>
using namespace std;
int main()
{
    int i=1;
    int mul;
    cout<<"enter your number: ";
    cin>>mul;
    int limit;
    cout<<"enter how far: ";
    cin>>limit;
    while(i<=limit)
    {
        cout<<mul<< "X" <<i<< "=" <<mul*i<<endl;
        i++;
    }
return 0;
}











