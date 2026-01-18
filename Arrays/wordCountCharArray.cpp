#include<iostream>
using namespace std;

int main() {
    char sentence[100];
    cin.getline(sentence, 100);
    int wordCount = 1;
    for (int i = 0; sentence[i] != '\0'; i++)
    {
        if (sentence[i] == ' ' || sentence[i] == '\0')
        {
            wordCount++;
        }
    }

    cout << "The Words in the Sentence are: " << wordCount << endl;
    return 0;
}
