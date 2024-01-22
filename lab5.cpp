#include <iostream>
#include <string>

using namespace std;

bool testPalindrome(const string& str, int start, int end) {
    if (start >= end) {
        return true;
    }

    if (str[start] != str[end]) {
        return false;
    }

    return testPalindrome(str, start + 1, end - 1);
}

int main() {
    string input;
    cout << "Enter a sentence: ";
    getline(cin, input);

    int len = input.length();
    for (int i = 0; i < len; ++i) {
        if (input[i] >= 'A' && input[i] <= 'Z') {
            input[i] += ('a' - 'A');
        }
    }

    if (testPalindrome(input, 0, len - 1)) {
        cout << "\"" << input << "\" is a palindrome" << endl;
    } else {
        cout << "\"" << input << "\" is not a palindrome" << endl;
    }

    return 0;
}