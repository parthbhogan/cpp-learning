#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter your sentence: ";
    getline(cin,str);
    int lcount=0;
    int dcount=0;
    int scount=0;
    int ccount =0;
    for(int i=0;i<str.length();i++){
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') ){
            lcount++;
        }
        else if(str[i]>='0' && str[i]<='9'){
            dcount++;
        }
        else if(str[i]==' '){
            scount++;
        }
        else{
            ccount++;
        }
    }
    cout<<"letters: "<<lcount<<endl;
    cout<<"numbers: "<<dcount<<endl;
    cout<<"spaces: "<<scount<<endl;
    cout<<"special characters: "<<ccount<<endl;
    return 0;
}