#include<iostream>
using namespace std;
int main()
{
    int age;
    cout <<"enter your age:";
    cin>>age;
    if(age>=60)
    {
        cout<<"senior"<<endl;
    }
    else if(age>=20)
    {
        cout<<"adult"<<endl;
    }
    else if(age>=13)
    {
        cout<<"teenager"<<endl;
    }
    else
    {
        cout<<"child"<<endl;
    }
    return 0;


}