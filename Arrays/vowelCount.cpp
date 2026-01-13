#include<iostream>
using namespace std;
int main()
{
	char arr[100];
	cout << "Enter Text: ";
	cin >> arr;
	// hamid\0

	int length = 0;
	while (arr[length] != '\0')
	{
		length++;
	}

	int vowelCount = 0;
	for (int i = 0; i < length; i++)
	{
		char c = arr[i];
		if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'I' || c == 'i' || c == 'O' || c == 'o' || c == 'u' || c == 'U')
		{
			vowelCount++;
		}
	}

	cout << "The Vowel Count is: " << vowelCount << endl;

	return 0;
}
