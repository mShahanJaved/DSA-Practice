#include<iostream>
using namespace std;
int main()
{

  int arr[30];
  cin.ignore();
  cin.getline(arr, 30);
  int length = 0;
  whiel(arr[length]!=0)
    {
    length++;
    }
  cout << "The String Length is: "<< length << endl;

return 0;
}
