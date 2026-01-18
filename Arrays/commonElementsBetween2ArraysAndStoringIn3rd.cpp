#include<iostream>
using namespace std;
int main()
{
	char ch1[21];
	cout << "Enter Array 1: ";
	cin.getline(ch1, 21);
	char ch2[11];
	cout << "Enter Array 2: ";
	cin.getline(ch2, 11);
	char common[21];
	int commonSize = 0;

	for (int i = 0; ch1[i] != '\0'; i++)
	{
		for (int j = 0; ch2[j] != '\0'; j++)
		{
			if (ch1[i] == ch2[j])
			{
				bool alreadyExists = false;
				for (int k = 0; k < commonSize; k++)
				{
					if (common[k] == ch1[i])
					{
						alreadyExists = true;
						break;
					}
				}

				if (!alreadyExists)
				{
					common[commonSize] = ch1[i];
					commonSize++;
				}
				break;
			}
			
		}
	}
	common[commonSize] = '\0';

	cout << "Common Elements are: " << common << endl;



	return 0;
}
