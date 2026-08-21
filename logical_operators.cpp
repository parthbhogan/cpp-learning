#include<iostream>
using namespace std;
int main()
{
int age;
int marks;
int id;
int special_permission;
cout<<"enter your age:";
cin>>age;
cout<<"enter your marks:";
cin>>marks;
cout<<"do you have an id ?(1 for yes 0 for no):";
cin>>id;   
cout<<"do you have special permission?(1 for yes 0 for no):";
cin>>special_permission;
if((age>=18&&marks>=60&&id==1)||!special_permission==0) //! (NOT) reverses a boolean value:
                                                        // true  -> false
                                                        // false -> true (just used for practice)
{
    cout<<"admission allowed"<<endl;
}
else
{
    cout<<"admission not allowed"<<endl;
}

return 0;

}