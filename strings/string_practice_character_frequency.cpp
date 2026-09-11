#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter your sentence: ";
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        int count=0;
        bool already=false;
        for(int k=0;k<i;k++){
            if(str[i]==str[k]){
                already=true;
                break;
            }
        }
        if(already==false){
        for(int j=0;j<str.length();j++){
            if(str[i]==str[j]){
                count++;
            }
        }
        cout<<str[i]<<" = "<<count<<endl;
    }
    }
    return 0;
}