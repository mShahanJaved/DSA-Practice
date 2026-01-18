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
	for (int i = 0; i < size; i++)
	{
		int num = arr[i];
		int rev = 0;
		while (num > 0)
		{
			rev = rev * 10 + num % 10;
			num /= 10;
		}
		arr[i] = rev;
	}
	cout << endl;
	cout << "The Reversed Elements are: ";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}
