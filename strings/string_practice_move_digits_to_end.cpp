#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter your string: ";
    getline(cin,str);
    string num;
    string letter;
    for(int i=0;i<str.length();i++){
        if(str[i]>='0' && str[i]<='9'){
            num+=str[i];
        }
        else{
            letter+=str[i];
        }
    }
    cout<<letter<<num;
    return 0;
}