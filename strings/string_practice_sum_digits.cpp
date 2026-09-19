#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter your string:";
    getline(cin,str);
    string num;
    int numsum = 0;
    for(int i=0;i<str.length();i++){
        if(str[i]<='9' && str[i]>='0'){
            num += str[i];
        }

    }
    for(int j=0;j<num.length();j++){
        numsum=numsum+(num[j]-'0');
    }
    cout<<"number from your string: "<<num<<endl;
    cout<<"sum of numbers: "<<numsum;
    return 0;
}