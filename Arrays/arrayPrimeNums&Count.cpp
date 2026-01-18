#include<iostream>
using namespace std;
int main()
{
	int prime[100];
	int size;
	cout << "Enter Size: ";
	cin >> size;

	for (int i = 0; i < size; i++)
	{
		cout << "Enter Element " << i + 1 << ": ";
		cin >> prime[i];
	}

	int primeCount = 0;
	for (int i = 0; i < size; i++)
	{
		int num = prime[i];
		bool isPrime = true;
		if (num <= 1) 
		{
			isPrime = false;
		}
		else
		{
			for (int j = 2; j < num; j++)
			{
				if (num % j == 0)
				{
					isPrime = false;
					break;
				}
			}
		}

		if (isPrime)
		{
			primeCount++;
		}
	}

	cout << "Prime Count: " << primeCount << endl;

	return 0;
}
