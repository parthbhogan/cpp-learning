#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter your sentence: ";
    getline(cin,str);
    bool od=true;
    for(int i=0;i<str.length();i++){
        if(str[i] < '0' || str[i] > '9'){
            od=false;
            break;


        }
    }
    if(od==true){
        cout<<"only digits";
    }
    else{
        cout<<"not only digits";
    }
    return 0;
}