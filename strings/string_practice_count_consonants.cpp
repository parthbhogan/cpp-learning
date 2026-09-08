#include<iostream>
#include<string>
using namespace std;
int main(){
    string elements;
    cout<<"enter elements: ";
    getline(cin,elements);
    string vowels="aeiou";
    int count=0;
    for(int i=0;i<elements.length();i++){
        bool vowel=false;
        for(int j=0;j<vowels.length();j++){
            if(elements[i]==vowels[j]){
                vowel=true;
            }
        }
        if(vowel==false&& elements[i]>='a'&& elements[i]<='z'){
            count++;
        }
    }
    cout<<count;
    return 0;
}