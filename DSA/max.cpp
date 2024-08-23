//Find the max element in an array. 
//Write program to reverse an array
//Find the sum of elements in an array
#include <iostream>
using namespace std;
int main(){
int arr1[10], max;
  cout << "Enter 10 numbers:" <<endl;
for (int i = 0; i < 10; i++) {
  cin >> arr1[i];
}
max=arr1[0];
  for (int i=0; i<10; i++) {
    if(max<arr1[i]) max=arr1[i];
  }
  cout << "The Max element in array is:" << max << endl;
}
