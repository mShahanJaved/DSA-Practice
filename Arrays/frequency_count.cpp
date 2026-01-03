#include <iostream>
using namespace std;

int main() {
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter Element " << i << ": ";
        cin >> arr[i];
    }
    
    for (int i = 0; i < 5; i++) {

         
        bool alreadyCounted = false;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                alreadyCounted = true;
                break;
            }
        }

     
        if (alreadyCounted == true) {
            continue;
        }

        
        int count = 0;
        for (int j = 0; j < 5; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

       
        cout << arr[i] << " appears " << count << " times" << endl;
    }

    return 0;
}
