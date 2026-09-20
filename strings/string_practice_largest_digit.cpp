#include <iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter your string: ";
    getline(cin,str);
    char max=0;
for(int i=0;i<str.length();i++){
    if(str[i]<='9'&& str[i]>='0'){
        if(str[i]>max){
            max=str[i];
        }
    }
    }
cout<<"largest digit: "<<max;
return 0;
}