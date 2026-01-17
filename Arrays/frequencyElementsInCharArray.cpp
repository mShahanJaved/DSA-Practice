#include<iostream>
using namespace std;
int main()
{
	char ch[100];
	cin.getline(ch, 100);
	
	for (int i = 0; ch[i] != '\0'; i++)
	{
		char c = ch[i];
		if (c == ' ')
		{
			continue;
		}
		int count = 0;
		for (int j = 0; ch[j] != '\0'; j++)
		{
			if (c == ch[j])
			{
				count++;
			}
		}

		bool alreadySeen = false;
		for (int k = 0; k < i; k++)
		{
			if (ch[k] == ch[i])
			{
				alreadySeen = true;
				break;
			}
		}

		if (!alreadySeen)
		{
			cout << c << ": " << count << endl;
		}
		
	}
	cout << endl;
	return 0;
}
