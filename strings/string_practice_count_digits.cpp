#include<iostream>
#include<string>
using namespace std;
int main(){
    string elements;
    cout<<"enter your elements: ";
    getline(cin,elements);
    int count=0;
    for(int i=0;i<elements.length();i++){
        if(elements[i]>='0' && elements[i]<='9') {
            count++;
        }
       
    }
    cout<<"total digits: "<<count;
    return 0;
}