#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter your string: ";
    getline(cin,str);
    int max=0;
    char mfreq=str[0];
    bool found=false;
    for(int i=0;i<str.length();i++){
        int count=0;
        for(int j=0;j<str.length();j++){
            if(str[i]==str[j]&&i!=j){
            count++;
            }

        }
        if(count>max){
            max=count;
            mfreq=str[i];
            found=true;
        }
    }
    
    if(found==false){
        cout<<"there is no any repeating character !";
    }
    else{
        cout<<"most  freq character: "<<mfreq;
    }
        return 0;
        
    }
