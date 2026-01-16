#include<iostream>
using namespace std;
int main()
{

	char ch1[100];
	cin.getline(ch1, 100);
	int length = 0;
	while (ch1[length] != '\0')
	{
		length++;
	}
	for (int i = 0; i < length; i++)
	{
		cout << ch1[i];
	}




	return 0;
}
