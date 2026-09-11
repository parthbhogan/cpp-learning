#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter your sentence: ";
    getline(cin,str);
    string vowels="aeiou";
    int vcount=0;
    int ccount=0;
    for(int i=0;i<str.length();i++){
        bool isvowel=false;
        for(int j=0;j<vowels.length();j++){
            if(str[i]==vowels[j]){
                isvowel=true;
                break;
            }
            
        }
        if(isvowel==true){
            vcount++;
        }
        else if((str[i]>='a' && str[i]<='z') ||  (str[i]>='A' && str[i]<='Z')){
            ccount++;
        }

    }
    cout<<"vowels: "<<vcount<<endl;
    cout<<"consonants: "<<ccount<<endl;
    
    return 0;
}
