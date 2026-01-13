#include<iostream>
using namespace std;
int main()
{
	char arr[100];
	cout << "Enter Text: ";
	cin >> arr;

	int length = 0;
	while (arr[length] != '\0')
	{
		length++;
	}

	int capitalCount = 0;
	int smallCount = 0;
	int numCount = 0;
	for (int i = 0; i < length; i++)
	{
		char c = arr[i];
		if (c >= 'A' && c <= 'Z')
		{
			capitalCount++;
		}
		else if (c >= 'a' && c <= 'z')
		{
			smallCount++;
		}
		else if (c >= '0' && c <= '9')
		{
			numCount++;
		}
	}

	cout << "The Capital Letters count is: " << capitalCount << endl;
	cout << "The Small Letters count is: " << smallCount << endl;
	cout << "The Number Count is: " << numCount << endl;

	return 0;
}
