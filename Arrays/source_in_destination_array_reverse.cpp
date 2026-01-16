#include<iostream>
using namespace std;
int main()
{

	char ch1[5] = { 'a', 'b', 'c', 'd', 'e' };
	char ch2[5];
	int j = 0;
	for (int i=4; i>=0; i--)
	{
		ch2[j] = ch1[i];
		cout << ch2[j] << " ";
		j++;
	}
	


	return 0;
}
