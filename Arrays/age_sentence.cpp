#include<iostream>
using namespace std;
int main()
{

	char ch[100];
	int age;
	cout << "Enter age: ";
	cin >> age;
	cin.ignore();
	cout << "Enter full Name: ";
	cin.getline(ch, 100);




	cout << "Age: " << age << endl;
	cout << "Name: " << ch << endl;

	return 0;
}
