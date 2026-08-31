#include<iostream>
using namespace std;
int main()
{
int age;
int marks;
int id;
cout<<"enter your age:";
cin>>age;
cout<<"enter your marks:";
cin>>marks;
cout<<"do you have an id? (1 for yes and 0 for no):";
cin>>id;
if(age >=18)
{
    if (marks>=60)
    {
        if (id==1)
        {
            cout<<"admission allowed"<<endl;
        }
            else
                {
        cout<<"id required"<<endl;
        }
    }
        else
        {
        cout<<"marks are too low"<<endl;
        }
}
    else
    {
    cout<<"not eligible due to age"<<endl;  
    }
return 0;
}
    


