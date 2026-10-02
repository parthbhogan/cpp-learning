#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter your string : ";
    getline(cin,str);
    string lword;
    int count=0;
    int lcount=0;
    string word;
    for(int i=0;i<str.length();i++){
    if(i == 0 || str[i-1] == ' '){
        word = "";
        count = 0;
        for(int j=i;j<str.length() && str[j]!=' ';j++){
            word += str[j];
            count++;
        }
bool dup = false;
for(int k=0;k<word.length();k++){
    for(int l=k+1;l<word.length();l++){
        char c1 = word[k];
        char c2 = word[l];
                if(c1 >= 'A' && c1 <= 'Z')
            c1 = c1 - 'A' + 'a';
        if(c2 >= 'A' && c2 <= 'Z')
            c2 = c2 - 'A' + 'a';
        if(c1 == c2){
            dup = true;
        }    
    }   
        }
        if(dup == false && count > lcount){
    lcount = count;
    lword = word;
        }
    }
}   
    cout<<lword;
    return 0;
}