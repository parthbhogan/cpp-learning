#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1;
    cout<<"enter your first word: ";
    getline(cin,str1);
    string str2;
    cout<<"enter ypur secound word: ";
    getline(cin,str2);
    if(str1.length() != str2.length()){
        cout<<"not equal !!"<<endl;
    }
    else {
        bool same=true;
        for(int i=0;i<str1.length();i++){
            if(str1[i]!=str2[i]){
                same = false;
                
            }
        }
        if(same == true){
            cout<<"strings are equal !!";

        }
        else{
            cout<<"not equal..";
        }

    }
    return 0;

}