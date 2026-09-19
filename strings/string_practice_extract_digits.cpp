#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter your statement: ";
    getline(cin,str);
    string num;
    for(int i=0;i<str.length();i++){
        if(str[i]>='0' && str[i]<='9'){
            num += str[i];
        }
    }
    cout<<num;
    return 0;
}