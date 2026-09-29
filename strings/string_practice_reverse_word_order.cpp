#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter your string: ";
    getline(cin,str);
    int end = str.length() - 1;
    for(int i=str.length()-1;i>=0;i--) {
        if (str[i]==' ' || i==0){
            int start;
        if(i == 0)
            start = 0;
        else
            start = i + 1;
            for(int j=start;j<=end;j++){
                cout<<str[j];
            }
            cout << " ";
            end=i-1;
        }
        
    }
    return 0;
}