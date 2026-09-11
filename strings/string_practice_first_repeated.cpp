#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    bool found=false;
    cout<<"enter your sentence: ";
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        for(int j=0;j<i;j++){
            if(str[i]==str[j]){
                cout<<str[i];
                found=true;
                break;
            }
        }
        if (found==true){
            break;
        }
    }
    return 0;
}