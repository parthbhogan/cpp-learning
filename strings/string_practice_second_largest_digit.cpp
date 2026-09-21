#include<iostream>
#include<string>
using namespace std;
int main() {
    string str;
    cout<<"enter your string: ";
    getline(cin,str);
    int max=-1;
    int secmax=-1;
    for(int i=0;i<str.length();i++){
        if(str[i]<='9' && str[i]>='0'){
            int digit = str[i]- '0';
            if(digit>max){
                secmax=max;
                max=digit;

                
            }
            else  if(digit<max && digit>secmax){
                secmax=digit;
            }
        }
    }
    cout<<"largest: "<<max<<endl;
    cout<<"secound largest: "<<secmax;
    return 0;

}