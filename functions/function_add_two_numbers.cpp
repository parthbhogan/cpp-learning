#include<iostream>
using namespace std;

int addTwoNumbers(int a, int b) {
    return a + b;
}

int main() {
    int result = addTwoNumbers(5, 3);
    cout << "The sum is: " << result << endl;
    return 0;
}