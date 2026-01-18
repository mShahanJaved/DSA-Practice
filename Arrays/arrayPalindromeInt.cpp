#include<iostream>
using namespace std;
int main()
{
	int arr[100];
	int size;
	cout << "Enter Size: ";
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cout << "Enter Element " << i + 1 << ": ";
		cin >> arr[i];
	}

	bool isPalin = true;
	for (int i = 0; i < size / 2; i++)
	{
		if (arr[i] != arr[size - i - 1])
		{
			isPalin = false;
			break;
		}
	}

	if (isPalin)
	{
		cout << "Palinrome" << endl;
	}
	else
	{
		cout << "Not a Palindrome" << endl;
	}

	return 0;
}
