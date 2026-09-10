#include<iostream>
#include<string>
using namespace std;
int main() {
    string sentence;
    cout<<"enter your sentence: ";
    getline(cin,sentence);
    for(int i=0;i<sentence.length();i++){
        if(sentence[i]!=' '){
            cout<<sentence[i];
        }
    }
    return 0;
}