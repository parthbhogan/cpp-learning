#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter your sentence: ";
    getline(cin,str);
     int max=0;
       char maxchar;
    for(int i=0;i<str.length();i++){
        int count=0;
        for(int j=0;j<str.length();j++){
            if(str[i]==str[j]){
            count++;
           
        }
    }
     if(count>max){
            max=count;
            maxchar=str[i];
            }
    }
     cout<<maxchar <<" = " <<max;
    return 0;
}