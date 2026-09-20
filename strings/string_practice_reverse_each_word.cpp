#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter your string";
    getline(cin,str);
        int start=0;
    for(int i=0;i<str.length();i++){
        if(str[i]==' '|| i==str.length()-1){

            for(int j = i- 1; j >= start; j--){
                start=str[i+1];

            cout<<str[j];
            }
        }


}
return 0;
}