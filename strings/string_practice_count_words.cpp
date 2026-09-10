#include<iostream>
#include<string>
using namespace std;
int main(){
    string sentence;
    cout<<"enter your sentence: ";
    getline(cin,sentence);
    int count=0;
    for(int i=0;i<sentence.length();i++){
        if(sentence[i]==' '){
            count++;
        }
    }
    cout<<"total words: "<<count+1;
    return 0;
}