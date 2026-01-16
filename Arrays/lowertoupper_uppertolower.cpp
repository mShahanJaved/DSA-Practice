#include<iostream>
using namespace std;
int main()
{

	char ch1[6];
	cin >> ch1;
	char c;
	for (int i = 0; i < 6; i++)
	{
		c = ch1[i];
		if (c >= 'A' && c <= 'Z')
		{
			c = c + 32;
			cout << c;
		}
		else if (c >= 'a' && c <= 'z')
		{
			c = c - 32;
			cout << c;
		}
	}



	return 0;
}
