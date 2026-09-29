#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter your string: ";
    getline(cin,str);
    int count=0;
    int mfreq=0;
    int secount=0;
    char secchar;
    char maxchar;
    for(int i=0;i<str.length();i++){
        bool already = false;

    for(int k=0;k<i;k++){
        if(str[i] == str[k]){
            already = true;
            break;
        }
    }

    if(already == true){
        continue;
    }

        for(int j=0;j<str.length();j++){
            if(str[i] == str[j]){
                count++;
            }
        }
        if(count > mfreq){
    secount = mfreq;
    secchar = maxchar;

    mfreq = count;
    maxchar = str[i];
}

        
        else {
            if(count > secount && count < mfreq){
            secount = count;
            secchar = str[i];
        }
    
    }    
        count=0;
    }   
    cout<<"Second most frequent character: "<<secchar<<" with frequency: "<<secount;
    return 0;
}