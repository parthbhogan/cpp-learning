#include<iostream>
using namespace std;
int main()

{
int age;
int id;
cout<<"enter your age:";
cin>>age;
cout<<"do you have an id? (enter 1 for yes, 0 for no):";
cin>>id;
if (age>=18){
             if (id==1)
             {
                cout<<"you can enter"<<endl;

             }
             else{
                cout<<"id required"<<endl;
             }
          }
          else{
            cout<<"you are not eligiable"<<endl;
          }
  return 0;

}