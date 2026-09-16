#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
    string sentence;
    cout << "Enter your sentence: ";
    getline(cin, sentence);
    for (int i = 0; i < sentence.length(); i++) {
        if (i == 0 || sentence[i - 1] == ' ') {
            sentence[i] = toupper(sentence[i]);
        }
    }
    cout << "Capitalized sentence: " << sentence;
    return 0;
}