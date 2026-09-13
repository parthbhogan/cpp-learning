#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter your sentence: ";
    getline(cin,str);
   
     string word="";

for(int i=str.length()-1;i>=0;i--){

    if(str[i]!=' '){
        word=str[i]+word;
    }
    else{
        cout<<word<<" ";
        word="";
    }


 
}
cout<<word;  
return 0;
}