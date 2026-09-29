#include<iostream>
#include<string>
using namespace std;
int main(){
        string str;
        cout<<"enter your string: ";
        getline (cin,str);
        int concount=0;
        string word;
        for(int i=0;i<str.length();i++){
        if(str[i]!=' '){
            word+=str[i];
            if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' &&
        str[i] != 'o' && str[i] != 'u'){
        concount++;
        
            }
        }
        else{
            cout<<word<<"---->"<<concount<<endl;
            word="";
            concount=0;
        }
    }
    cout<<word<<"---->"<<concount<<endl;
    return 0;
}