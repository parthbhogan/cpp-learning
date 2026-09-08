#include<iostream>
#include<string>
using namespace std;
int main(){
    string name;
    cout<<"enter your name: ";
    getline(cin,name);
    for (int i=0;i<name.length();i++){
        cout<<name[i];
    }
    cout<<endl;
    cout<<"length of string: "<<name.length();
    return 0;  
}