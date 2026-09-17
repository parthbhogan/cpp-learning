#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
    string sentence;
    cout << "Enter your sentence: ";
    getline(cin, sentence);
    for (int i = 0; i < sentence.length(); i++) {
        if (isupper(sentence[i])) {
            sentence[i] = tolower(sentence[i]);
        } else if (islower(sentence[i])) {
            sentence[i] = toupper(sentence[i]);
        }
    }
    cout << "Toggled case sentence: " << sentence;
    return 0;
}
