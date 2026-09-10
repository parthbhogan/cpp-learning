#include<iostream>
#include<string>
using namespace std;
int main(){
    string sentence;
    cout<<"enter sentence: ";
    getline(cin,sentence);
    int upcount=0;
    int lowcount=0;
    for(int i=0;i<sentence.length();i++){
        if(sentence[i]>='a' && sentence[i]<='z'){
            lowcount++;
        }
        else if(sentence[i]>='A' && sentence[i]<='Z'){
            upcount++;
        }
    }
    cout<<"lowercase: "<<lowcount<<endl;
    cout<<"uppercase: "<<upcount<<endl;
    return 0;
}