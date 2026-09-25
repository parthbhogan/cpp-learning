#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter your text: ";
    getline(cin,str);
    int max=0;
    string word;
        string maxw;
        int count=0;
    for(int i=0;i<str.length();i++){
        if(str[i] != ' '){
            count++;

            word+=str[i];

        }
        else{
        if(count>max){
            max=count;
            maxw=word;
        }
    word = "";
    count = 0;
        
    }
    }
    if(count > max) {
    max = count;
    maxw = word;
}
cout<<maxw;
return 0;

}