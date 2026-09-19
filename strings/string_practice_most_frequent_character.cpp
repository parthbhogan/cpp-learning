#include <iostream>
#include <string>
using namespace std;
int main() {
    string sentence;
    cout << "Enter your sentence: ";
    getline(cin, sentence);
    char mostFrequentChar;
    int maxCount = 0;
    for (int i = 0; i < sentence.length(); i++) {
        if(sentence[i] == ' '){
    continue;
            }
        int count = 0;
        for (int j = 0; j < sentence.length(); j++) {
            if (sentence[i] == sentence[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            mostFrequentChar = sentence[i];
        }
    }
    cout << "The most frequent character is: " << mostFrequentChar << endl;
    cout << "frequency:  " << maxCount << endl;
    return 0;
}