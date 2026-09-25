#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter your string: ";
    getline(cin,str);
    int count=1;
    int max=0;
    char most;
    for(int i=0;i<str.length();i++){
        if(i != str.length()-1 && str[i] == str[i+1]){
            count++;
        
        }
        else{
            if(count>max){
                max=count;
                most=str[i];
            }
        count=1;
        }
    }
    cout<<most<<"-->"<<max<<" times";
    return 0;
}