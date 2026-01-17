#include<iostream>
using namespace std;

int main() {
    char animals[100];      
    char search[50];        

    cout << "Enter animals (with spaces): ";
    cin.getline(animals, 100);

    cout << "Enter animal to search: ";
    cin.getline(search, 50);

    bool found = false;
    int i = 0;
    while (animals[i] != '\0')
    {
        if (animals[i] == ' ')
        {
            i++;
            continue;
        }
        int j = 0;
        
        while (animals[i] != ' ' && animals[i] != '\0' && search[j] != '\0')
        {
            if (search[j] != animals[i])
            {
                break;
            }
            i++;
            j++;
        }

        if (search[j] == '\0' && (animals[i] == '\0' || animals[i] == ' '))
        {
            found = true;
            break;
        }

        while (animals[i] != '\0' && animals[i] != ' ')
        {
            i++;
        }
    }

    if (found)
    {
        cout << "Animal Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    return 0;
}
