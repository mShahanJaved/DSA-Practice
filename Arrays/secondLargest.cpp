#include<iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    int largest = A;
    int secondLargest = -1;
    if (A != largest && A > secondLargest)
    {
        secondLargest = A;
    }
    else if(B != largest && B > secondLargest)
    {
        secondLargest = B;
    }
    else if (C != largest && C > secondLargest)
    {
        secondLargest = C;
    }

    if (secondLargest == -1)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << secondLargest << endl;
    }

    return 0;
}
