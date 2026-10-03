#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter your string: ";
    getline(cin,str);
    int maxFrequency = 0;
    string mostFrequentWord;
    for(int i=0;i<str.length();i++){
        if(i == 0 || str[i-1] == ' '){
            string word = "";
        for(int j = i; j < str.length() && str[j] != ' '; j++){
    word += str[j];
}
    int frequency = 0;
for(int k = 0; k < str.length(); k++){
    if(k == 0 || str[k-1] == ' '){
        string currentWord = "";
        for(int l = k; l < str.length() && str[l] != ' '; l++){
            currentWord += str[l];
        }
        if(currentWord == word){
            frequency++;
        }
    }
}
if(frequency > maxFrequency){
    maxFrequency = frequency;
    mostFrequentWord = word;
}
    }
}
cout << "Most frequent word: " << mostFrequentWord;
return 0;
}