#include <iostream>
using namespace std;

int main() {
    
    int arr[7];
    for (int i = 0; i < 7; i++) 
    {
        cout << "Enter Element " << i << ": ";
        cin >> arr[i];
    }

 
    cout << "Unique Elements: ";
    for (int i = 0; i < 7; i++) 
    {

       
        int count = 0;
        for (int j = 0; j < 7; j++) 
        {
            if (arr[i] == arr[j]) 
            {
                count++;
            }
        }

        
        if (count == 1) 
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    return 0;
}
