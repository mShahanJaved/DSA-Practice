#include <iostream>
using namespace std;

int main() {
    int arr[6];
    for (int i = 0; i < 6; i++) {
        cout << "Enter Element " << i << ": ";
        cin >> arr[i];
    }

    
    for (int i = 0; i < 5; i++) {
        int min_idx = i;

     
        for (int j = i + 1; j < 6; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        if (min_idx != i) {
            int temp = arr[min_idx];
            arr[min_idx] = arr[i];
            arr[i] = temp;
        }
    }

    cout << "Sorted Array: [";
    for (int i = 0; i < 6; i++) {
        cout << arr[i];
        if (i < 5) cout << ", "; 
    }
    cout << "]" << endl;

    return 0;
}
