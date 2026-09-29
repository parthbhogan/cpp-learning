#include<iostream>
#include<string>
using namespace std;
int main(){
            string str;
            cout<<"enter your string: ";
            getline(cin,str);
            for(int i=0;i<str.length();i++){
                if(str[i]>='a' && str[i]<='z'){
                str[i] = str[i] - 'a' + 'A';
                }
                else if(str[i]>='A' && str[i]<='Z'){
                str[i] = str[i] - 'A' + 'a';
                }
                
            }
            cout<<str;
            return 0;
}