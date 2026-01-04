#include <iostream>
using namespace std;

int main() {
    int arr1[4];
    int arr2[4];

    
    cout << "Enter Array 1:" << endl;
    for (int i = 0; i < 4; i++) 
    {
        cout << "Element " << i << ": ";
        cin >> arr1[i];
    }

   
    cout << "Enter Array 2:" << endl;
    for (int i = 0; i < 4; i++) 
    {
        cout << "Element " << i << ": ";
        cin >> arr2[i];
    }

    cout << "Common Elements: ";

   
    for (int i = 0; i < 4; i++) 
    {

       
        bool already_printed = false;
        for (int k = 0; k < i; k++) 
        {
            if (arr1[i] == arr1[k]) 
            {
                already_printed = true;
                break;
            }
        }

        
        if (already_printed)
        {
            continue;
        }

       
        for (int j = 0; j < 4; j++) 
        {
            if (arr1[i] == arr2[j]) 
            {
                cout << arr1[i] << " ";
                break; 
            }
        }
    }
    cout << endl;

    return 0;
}
