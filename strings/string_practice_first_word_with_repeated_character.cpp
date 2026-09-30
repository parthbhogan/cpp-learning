#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter your string: ";
    getline(cin,str);
    string word;
    for(int i=0;i<str.length();i++){
        if(i == 0 || str[i-1] == ' '){
            word = "";
            for(int j=i;j<str.length() && str[j] != ' ';j++){
                word += str[j];
            }
            for(int k=0;k<word.length();k++){
        for(int l=k+1;l<word.length();l++){
        char c1 = word[k];
        char c2 = word[l];
        if(c1 >= 'A' && c1 <= 'Z')
            c1 = c1 - 'A' + 'a';
        if(c2 >= 'A' && c2 <= 'Z')
            c2 = c2 - 'A' + 'a';
        if(c1 == c2){
            cout<<"first word with repeated character: "<<word;
            return 0;
                    }
                }
            }
        }
    }
    cout<<"no word with repeated character found.";
    return 0;
}