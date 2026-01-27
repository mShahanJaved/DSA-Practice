#include <iostream>
using namespace std;

int main() {
    int arr1[100];
    int size1;
    cout << "Enter Size1: ";
    cin >> size1;
    for (int i = 0; i < size1; i++)
    {
        cin >> arr1[i];
    }
    int arr2[100];
    int size2;
    cout << "Enter Size2: ";
    cin >> size2;
    for (int i = 0; i < size2; i++)
    {
        cin >> arr2[i];
    }
    int common[100];
    int commonSize = 0;
    for (int i = 0; i< size1; i++)
    {
        for (int j = 0; j<size2; j++)
        {
            
            if (arr1[i] == arr2[j])
            {
                bool alreadyExists = false;
                for (int k = 0; k < commonSize; k++)
                {
                    if (common[k] == arr1[i])
                    {
                        alreadyExists = true;
                        break;
                    }
                }


                if (!alreadyExists)
                {
                    common[commonSize] = arr1[i];
                    commonSize++;
                }
            }
        }
    }

  
    for (int i = 0; i < commonSize; i++)
    {
        cout << common[i] << " ";
    }
    return 0;
}
