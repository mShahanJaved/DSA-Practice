#include<iostream>
using namespace std;
int main()
{
	int fib[100];
	int size;
	cout << "Enter Size: ";
	cin >> size;
	
	fib[0] = 0;
	fib[1] = 1;

	for (int i = 2; i < size; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	cout << endl;
	cout << "The Fibonacci Series is: ";
	for (int i = 0; i < size; i++)
	{
		cout << fib[i] << " ";
	}
	return 0;
}
