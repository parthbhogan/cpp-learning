#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1;
    cout<<"enter first sentence: ";
    getline(cin,s1);
    string s2;
    cout<<"enter secound sentence: ";
    getline(cin,s2);

    if(s1.length()!=s2.length()){
    cout<<"not an anagram!!";
    return 0;
    
}
    bool isanagram=true;
    for(int i=0;i<s1.length();i++){
        int count1=0;
        int count2=0;
        for(int j=0;j<s1.length();j++){
            if(s1[i]==s1[j]){
            count1++;
            }
        }
        for(int j=0;j<s2.length();j++){
        if(s1[i]==s2[j]){
            count2++;
        }
    }
    if(count1 != count2){
        isanagram=false;
    }
}
  if(isanagram==true){
        cout<<" anagram";
    }
    else{
        cout<<"not an anagram!!";
    }
    return 0;
}