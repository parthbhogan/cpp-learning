#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter your string: ";
    getline(cin,str);
    int digit=0;
    char maxdigit;
    bool found=false;
    for(int i=0;i<str.length();i++){
        int count=0;
        for(int j=0;j<str.length();j++){

    if(str[i]<='9'&& str[i]>='0'){
        found=true;
        if(str[i]==str[j])
        count++;
    }    
    
    }
    if(digit<count){
        digit=count;
        maxdigit=str[i];

    }
    else if(digit==count){
        if(str[i]<maxdigit){
            maxdigit=str[i];
        }
    }

}
    if(found==false){
    cout<<"there is no any digit !!";
        
    }
    else{
cout<<"most frequent digit: "<<maxdigit;
    }
return 0;
}