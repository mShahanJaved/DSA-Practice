#include <iostream>
using namespace std;

int main() {
    int arr[6];
    for (int i = 0; i < 6; i++) {
        cout << "Enter Element " << i << ": ";
        cin >> arr[i];
    }

   
    for (int i = 0; i < 5; i++) {
        int max_idx = i; 

        
        for (int j = i + 1; j < 6; j++) {
            
            if (arr[j] > arr[max_idx]) {
                max_idx = j;
            }
        }

      
        if (max_idx != i) {
            int temp = arr[max_idx];
            arr[max_idx] = arr[i];
            arr[i] = temp;
        }
    }

  
    cout << "Sorted Array (Descending): [";
    for (int i = 0; i < 6; i++) {
        cout << arr[i];
        if (i < 5) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}
