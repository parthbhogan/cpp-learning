#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter your sentence: ";
    getline(cin,str);
    string word="";
    string largest_word="";
    for(int i=0;i<str.length();i++){
        if(str[i]!=' '){
            word += str[i];
        }
        else{
            if(largest_word=="" || word.length()>largest_word.length()){
                largest_word=word;
            }
            word="";
        }
    }
    if(largest_word=="" || word.length()>largest_word.length()){
        largest_word=word;
    }
    cout<<"largest word is: "<<largest_word<<endl;
    return 0;
}