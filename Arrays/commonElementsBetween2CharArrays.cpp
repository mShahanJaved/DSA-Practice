#include<iostream>
using namespace std;
int main()
{
	char ch1[100];
	char ch2[100];
	cin.getline(ch1, 100);
	cin.getline(ch2, 100);
	cout << "The Common Elements are: ";
	for (int i = 0; ch1[i] != '\0'; i++)
	{
		char c = ch1[i];

		if (c == ' ')
		{
			continue;
		}
		bool exists = false;
		for (int j = 0; ch2[j] != '\0'; j++)
		{
			if (c == ch2[j])
			{
				exists = true;
				break;
			}
		}

		bool alreadySeen = false;
		for (int k = 0; k < i; k++)
		{
			if (ch1[k] == ch1[i] && exists)
			{
				alreadySeen = true;
				break;
			}
		}

		if (exists && !alreadySeen)
		{
			cout << c  << " ";
		}
	}
	cout << endl;
	return 0;
}
