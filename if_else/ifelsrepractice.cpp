#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"enter your marks:";
    cin>>marks;
    if (marks >=90)
    {
     cout<<"grade a"<<endl;
    }
    else if(marks>=75)
    {
        cout<<"grade b"<<endl;
    }
    else if(marks>=60)
    {
        cout<<"grade c"<<endl;
    }
    else if(marks>=40)
    {
        cout<<"grade d"<<endl;
    }
    else
    {
        cout<<"fail"<<endl;
    }
return 0;
}