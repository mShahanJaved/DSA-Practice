#include <iostream>
using namespace std;

int main() {
    int arr[100] = { 20, 50, 30, 60, 70 };
    int size = 5;

    // We use a while loop because the size changes
    int i = 1;
    while (i < size - 1) { // Stop before the last element

        // Check for Valley: is middle smaller than left AND right?
        if (arr[i] < arr[i - 1] && arr[i] < arr[i + 1]) {

            // 1. Calculate the sum of neighbors
            int sum = arr[i - 1] + arr[i + 1];

            // 2. Replace valley with the sum
            arr[i] = sum;

            // 3. Remove neighbors (Shift the rest of the array)
            // Remove the right neighbor first
            for (int j = i + 1; j < size - 1; j++) {
                arr[j] = arr[j + 1];
            }
            size--; // Array is smaller now

            // Remove the left neighbor
            for (int j = i - 1; j < size - 1; j++) {
                arr[j] = arr[j + 1];
            }
            size--; // Array is smaller now

            // Reset 'i' to 1 to check for new valleys created by the collapse
            i = 1;
        }
        else {
            i++; // Move to next element if no valley found
        }
    }

    // Print resulting array
    cout << "Final Array: [ ";
    for (int k = 0; k < size; k++) {
        cout << arr[k] << " ";
    }
    cout << "]" << endl;

    return 0;
}
