#include<iostream>
using namespace std;

int main() {
    char ch1[100];
    cin.getline(ch1, 100);
    
    cout << "Unique elements: ";
    
    for(int i = 0; ch1[i] != '\0'; i++) {
        char c = ch1[i];
        
        // Skip spaces
        if(c == ' ') continue;
        
        // Check if already seen BEFORE this position
        bool alreadySeen = false;
        for(int k = 0; k < i; k++) {
            if(ch1[k] == c) {
                alreadySeen = true;
                break;
            }
        }
        
        // Print only if NOT seen before
        if(!alreadySeen) {
            cout << c << " ";
        }
    }
    cout << endl;
    return 0;
}
