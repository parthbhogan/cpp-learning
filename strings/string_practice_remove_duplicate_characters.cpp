#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter your string: ";
    getline(cin,str);
    for(int i=0;i<str.length();i++){
    bool duplicate = false;
        for(int j=0;j<i;j++){
            if(str[i] == str[j] && i!=j){
                duplicate = true;
            break;

            }
        }
        if(duplicate == false){
    cout<<str[i];
    }

    }
    return 0;
}
