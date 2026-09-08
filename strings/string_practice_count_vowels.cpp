#include<iostream>
#include<string>
using namespace std;
int main(){
    string elements;
    string vowels="aeiou";
    cout<<"enter your sentence: ";
    getline(cin,elements);
    int count=0;
    for(int i=0;i<elements.length();i++){
        for(int j=0;j<vowels.length();j++){
            if(elements[i]==vowels[j]){
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}