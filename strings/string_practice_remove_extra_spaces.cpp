#include<iostream>
#include<string>
using namespace std;
int main(){
    string sentence;
    cout << "Enter your sentence: ";
    getline(cin, sentence);
    string result;
    for(int i = 0; i < sentence.length(); i++){
        if(sentence[i] != ' ' || (i > 0 && sentence[i-1] != ' ')){
    result += sentence[i];
}
    }
    cout << "The sentence after removing extra spaces is: " << result << endl;
    return 0;
}