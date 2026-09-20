#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter your string: ";
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        int cnt=1;
        while(i+1 < str.length() && str[i] == str[i+1]){
        cnt++;
        i++;
    }
        cout<<str[i]<<cnt;

    }
    return 0;
}