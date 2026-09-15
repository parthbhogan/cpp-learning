#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter your sentence: ";
    getline(cin,str);
    string word="";
    string smallest_word="";
    for(int i=0;i<str.length();i++){
        if(str[i]!=' '){
            word += str[i];
        }
        else{
            if(smallest_word=="" || word.length()<smallest_word.length()){
                smallest_word=word;
            }
            word="";
        }
    }
    if(smallest_word=="" || word.length()<smallest_word.length()){
        smallest_word=word;
    }
    cout<<"smallest word is: "<<smallest_word<<endl;
    return 0;
}