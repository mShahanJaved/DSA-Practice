#include<iostream>
using namespace std;
int main()
{
	char ch[100];
	cin.getline(ch, 100);
	
	char find;
	cout << "Enter Character to find: ";
	cin >> find;

	char replace;
	cout << "Enter Character to replace with find: ";
	cin >> replace;

	for (int i = 0; ch[i] != '\0'; i++)
	{
		if (ch[i] == find)
		{
			ch[i] = replace;
		}
	}

	cout << "The Result is: " << ch << endl;
	return 0;
}
