#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter your sentence: ";
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        int count=0;
        for(int j=0;j<str.length();j++){
            if(str[i]==str[j] && i != j){
                count++;
            }
        }
        if(count==0){
            cout<<str[i];
            break;
        }
        
    }
    return 0;
}