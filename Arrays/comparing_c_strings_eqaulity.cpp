#include<iostream>
using namespace std;
int main()
{

	char ch1[6];
	char ch2[6];
	cin >> ch1;
	cin >> ch2;
	bool flag = true;
	for (int i = 0; i < 6; i++)
	{
		if (ch1[i] != ch2[i])
		{
			flag = false;
			break;
		}
	}

	if (flag)
	{
		cout << "Same String" << endl;
	}
	else
	{
		cout << "Not Matched" << endl;
	}



	return 0;
}
