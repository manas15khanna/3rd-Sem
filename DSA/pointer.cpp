#include<iostream>
using namespace std;
int main(){
  int arr[] = {11, 22, 33, 44, 55}, i;
  int *p = arr;
  cout << "Value of &arr = " << &arr << endl;
  cout << "Value of *p = " << *p << endl;
  for(i = 0; i < 5; i++)
      cout << "Value of *(p+i) = " << *(p+i) << endl;
  cout << "Value of *(p)+i = " << *(p)+i << endl;

  for(i = 0; i < 5; i++)
      cout << "Value of &arr[i] = " << &arr[i] << endl;
  cout << "Value of p = " << p << endl;
  cout << "Value of --p = " << --p << endl;
  cout << "Value of ++p = " << ++p << endl;
  cout << "Value of *p+i = " << *p+i << endl;
  cout << "Value of (*p)-i = " << (*p)-i << endl;
  for(i = 0; i < 5; i++)
      cout << "Value of p++ = " << p++ << endl;
  return 0;
}
