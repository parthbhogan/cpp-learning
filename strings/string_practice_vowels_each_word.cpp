#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter your string: ";
    getline(cin,str);
    int vowelc=0;
    string word;
    for(int i=0;i<str.length();i++){
        if(str[i] !=' '){
            word+=str[i];
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
        str[i] == 'o' || str[i] == 'u'){
    vowelc++;

    }

        }  
        else{
            cout<<word<<"---->"<<vowelc<<endl;
        word="";
        vowelc=0;
        }    
    }
    cout<<word<<"---->"<<vowelc<<endl;
    return 0;
}