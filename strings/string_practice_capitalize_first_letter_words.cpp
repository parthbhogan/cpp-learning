#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter your string: ";
    getline(cin,str);
    for(int i=0;i<str.length();i++){
    if(i==0 && str[0]>='a' && str[0]<='z'){
        str[0]=str[0]-'a'+'A';
    }
        else{
            if(str[i]==' '&& i != str.length()-1 && str[i+1]>='a' && str[i+1]<='z'){
                str[i+1]=str[i+1]-'a'+'A';

            }
        


    }
    
    }
    cout<<str;
    return 0;
}