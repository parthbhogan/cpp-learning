#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter your sentence: ";
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        bool already=false;
        for(int j=0;j<i;j++){
            if(str[i] == str[j]){
                already=true;
                break;
                
            }
        }
        if(already==false){
            cout<<str[i];
        }
    }
    return 0;
}