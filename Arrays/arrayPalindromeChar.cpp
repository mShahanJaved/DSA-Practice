#include<iostream>
using namespace std;
int main()
{
	char string[100];
	cin >> string;
	int length = 0;
	while (string[length] != '\0')
	{
		length++;
	}

	bool isPalin = true;
	for (int i = 0; i < length; i++)
	{
		if (string[i] != string[length - i - 1])
		{
			isPalin = false;
			break;
		}
	}

	if (isPalin)
	{
		cout << "Palindrome" << endl;
	}
	else
	{
		cout << "Not a Palindrome" << endl;
	}
	return 0;
}
