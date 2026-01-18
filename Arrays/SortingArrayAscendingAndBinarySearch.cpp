#include<iostream>
using namespace std;
int main()
{
	int array[5];
	int size = sizeof(array) / sizeof(array[0]);
	
	for (int i = 0; i < size; i++)
	{
		cout << "Enter Element " << i + 1 << ": ";
		cin >> array[i];
	}
	cout << endl;
	int target;
	cout << "Enter Target Value: ";
	cin >> target;
	cout << endl;

	// Bubble Sort
	
	for (int i = 0; i < size - 1; i++)
	{
		bool swapped = false;
		for (int j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swapped = true;
			}
		}

		cout << "Pass: " << i + 1 << " ";
		for (int k = 0; k < size; k++)
		{
			cout << array[k] << " ";
		}
		cout << endl;
		if (!swapped)
		{
			break;
		}
	}
	cout << endl;
	
	cout << "The Sorted Array is: ";
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}

	int comparisons = 0;
	int left = 0;
	int right = size - 1;
	int mid = 0;
	bool found = false;
	while (left <= right)
	{
		comparisons++;
		mid = (left + right) / 2;
		if (array[mid] == target)
		{
			found = true;
			break;
		}
		else if (target < array[mid])
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}
	cout << endl;
	if (found)
	{
		cout << "Target Found: " << target << " at index: " << mid << endl;
	}
	else
	{
		cout << "Not Found" << endl;
	}
	cout << endl;
	cout << "The Comparisons are: " << comparisons << endl;
	return 0;
}
