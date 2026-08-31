#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"enter your number:";
    cin>>number;
    if(number>0)
    {
        cout<<"positive"<<endl;
    }
    else if(number<0)
    {
        cout<<"negative"<<endl;
    }
    else 
     {
        cout<<"zero"<<endl;
     }
    return 0;
}