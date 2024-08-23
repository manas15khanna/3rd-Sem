//Write a program to reverse an array
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int arr1[10], arr2[10];
  cout << "Enter Array:" <<endl;
  for(int i=0; i<10; i++)
    cin >> arr1[i];
  reverse(arr2, arr1 + 10);
  cout << "Reversed array is:" <<endl;
  for (int i=0; i<10; i++)
    cout << arr2[i] << endl;
}
