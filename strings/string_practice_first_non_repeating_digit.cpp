#include<iostream>
#include<string>
using  namespace std;
int main(){
    string str;
    cout<<"enter your string: ";
    getline(cin,str);
    bool found=false;
    for(int i=0;i<str.length();i++){
        int count=0;
        if(str[i] >= '0' && str[i] <= '9'){
        
        for(int j=0;j<str.length();j++){
            if(str[i]==str[j]&&i!=j){
                count++;
            
            }
        }
            if(count==0){
                cout<<str[i];
                found=true;
                break;
            
        }
        
        }
    }
    if(found==false){
        cout<<"no non repeating digit";
    }
    
    return 0;
}