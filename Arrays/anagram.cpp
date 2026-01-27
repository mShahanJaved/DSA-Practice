#include <iostream>
using namespace std;

int main() {
    char s1[100], s2[100];

    cout << "Enter first word: ";
    cin >> s1;
    cout << "Enter second word: ";
    cin >> s2;

    int len1 = 0, len2 = 0;

    // Find length of s1
    for (int i = 0; s1[i] != '\0'; i++) { len1++; }
    // Find length of s2
    for (int i = 0; s2[i] != '\0'; i++) { len2++; }

    // If lengths are different, they can't be anagrams
    if (len1 != len2) {
        cout << "Not an Anagram";
        return 0;
    }

    // Compare letters
    for (int i = 0; i < len1; i++) {
        bool found = false;
        for (int j = 0; j < len2; j++) {
            if (s1[i] == s2[j]) {

                found = true;
                break;
            }
        }

        if (found == false) {
            cout << "Not an Anagram";
            return 0;
        }
    }

    cout << "It is an Anagram!";
    return 0;
}
