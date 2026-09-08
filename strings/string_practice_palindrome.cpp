#include<iostream>
#include<string>
using namespace std;
int main(){
    string pal;
    cout<<"enter your word: ";
    getline(cin,pal);
    int i=0;
    int j= pal.length()-1;
   bool ispal = true;

for(int i = 0, j = pal.length()-1; i < j; i++, j--){
    if(pal[i] != pal[j]){
        ispal = false;
        break;
    }
}

if(ispal == true){
    cout << "palindrome";
}
else{
    cout << "not a palindrome";
}
    
    return 0;
   

    }
