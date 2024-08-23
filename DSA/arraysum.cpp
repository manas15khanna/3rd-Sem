//Find the sum of array
#include <iostream>
using namespace std;
int main()
{
  int arr1[100], size, sum=0, i;
  cout << "Enter array size:" <<endl;
  cin >> size;
  cout << "Enter The elements of array:" << endl;
  for(int i=0; i<size; i++)
    cin >> arr1[i];
  for(int i = 0; i < size; i++)
          sum = sum + arr1[i];
  cout << "The sum of array is:" << sum << endl;
}
