#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter your string: ";
    getline(cin,str);
    int count=0;
    string word;
    int shortc=str.length() + 1;
    string shortw;
        for(int i=0;i<str.length();i++){
            if(str[i] != ' ' ){
            count++;  
            word+=str[i];     
            }
            else{
                if(count<shortc){
                    shortc=count;
                    shortw=word;

                }
                count=0;
                word="";
            }

        }
        if(count <shortc){
            shortc=count;
            shortw=word;
        }
        cout<<shortw;
        return 0;
}
