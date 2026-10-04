#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
    string str;
    cout<<"enter your string";
    getline(cin,str);
    string word="";
    int maxVowels=-1;
    string Vowelw="";
    for(int i=0;i<str.length();i++){
        if(i==0 || str[i-1]==' '){
            word="";
            for(int j=i;j<str.length() && str[j]!=' ';j++){
                word+=str[j];
            }
            int vowelCount=0;
            for(int k=0;k<word.length();k++){
                char ch=tolower(word[k]);
                if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
                    vowelCount++;
                }
            }
            if(vowelCount>maxVowels){
                maxVowels=vowelCount;
                Vowelw=word;
            }
        }
    }
    cout<<"Word with most vowels: "<<Vowelw<<endl;
    cout<<"Number of vowels: "<<maxVowels<<endl;
    return 0;
}