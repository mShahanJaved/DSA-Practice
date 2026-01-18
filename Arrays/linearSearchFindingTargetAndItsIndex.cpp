#include<iostream>
using namespace std;

int main() {
    char arr[100];
    cout << "Enter Array: ";
    cin.getline(arr, 100);
    char target;
    cout << "Enter Target Value: ";
    cin >> target;
    bool found = false;
    int index = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (target == arr[i])
        {
            found = true;
            index = i;
            break;
        }
    }

    if (found)
    {
        cout << "Target Found " << target << " at Index: " << index << endl;
    }
    return 0;
}
