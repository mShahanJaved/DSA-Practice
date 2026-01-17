#include<iostream>
using namespace std;
int main()
{
	char ch1[100];
	char ch2[100];
	cin.getline(ch1, 100);
	cin.getline(ch2, 100);
	char ch3[100];
	int k = 0;
	for (int i = 0; ch1[i] != '\0'; i++)
	{
		ch3[k] = ch1[i];
		k++;
	}

	for (int j = 0; ch2[j] != '\0'; j++)
	{
		ch3[k] = ch2[j];
		k++;
	}

	ch3[k] = '\0';

	int length = k;
	for (int i = 0; i < length-1; i++)
	{
		for (int j = 0; j < length - i - 1; j++)
		{
			if (ch3[j] > ch3[j + 1])
			{
				char temp = ch3[j];
				ch3[j] = ch3[j + 1];
				ch3[j + 1] = temp;
			}
		}
	}

	cout << "The Merged Sorted Array is: " << ch3 << " ";
	cout << endl;
	return 0;
}
