#include <iostream>
using namespace std;

int main() {
    int arr[9];
    
    for (int i = 0; i < 9; i++) 
    {
        cout << "Enter Element " << i << ": ";
        cin >> arr[i];
    }

    cout << "Duplicate Elements: ";

    
    for (int i = 0; i < 9; i++) 
    {
        
        bool already_processed = false;
        for (int k = 0; k < i; k++) 
        {
            if (arr[i] == arr[k]) 
            {
                already_processed = true;
                break;
            }
        }

        if (already_processed) 
        {
            continue; 
        }

        
        for (int j = i + 1; j < 9; j++) 
        {
            if (arr[i] == arr[j]) 
            {
                cout << arr[i] << " ";
                break; 
            }
        }
    }

    cout << endl;
    return 0;
}
