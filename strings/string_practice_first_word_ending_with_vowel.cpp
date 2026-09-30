#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter your string: ";
    getline(cin,str);
    string firstWord;    
    for(int i=0;i<str.length();i++){
        if( i == str.length()-1 || str[i+1] == ' '){
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            int start = i;
    while(start > 0 && str[start - 1] != ' '){
        start--;
    }      
            firstWord = "";
            for(int j = start; j <= i; j++){
            firstWord += str[j];
            }
            break;
        }
    }
        
    }
    cout<<"first word to end with vowel: "<<firstWord;
    return 0;
}