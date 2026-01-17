#include<iostream>
using namespace std;
int main()
{
	char text[100];
	cout << "Enter Text: ";
	cin.getline(text, 100);
	int length = 0;
	while (text[length] != '\0')
	{
		length++;
	}

	cout << endl;
	cout << "Original Text: " << text << endl;

	int write = 0;
	for (int read = 0; read < length; read++)
	{
		if (text[read] != ' ' && text[read] != '\t')
		{
			text[write] = text[read];
			write++;
		}
	}

	text[write] = '\0';
	cout << "No spaces Modified Text: " << text << endl;
	return 0;
}
