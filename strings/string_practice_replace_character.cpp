#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter your sentence: ";
    getline(cin,str);
    char rmv;
    char add;
    cout<<"enter a letter to replace: ";
    cin>>add;
    cout<<"enter which letter to replace: ";
    cin>>rmv;
    for(int i=0;i<str.length();i++){
        if(str[i]==rmv){
            str[i]=add;
        }
        cout<<str[i];
    }
    return 0;

}