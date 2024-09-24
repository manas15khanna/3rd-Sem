#include<iostream>
using namespace std;
int arr[25], n;
void selection_sort();
int main() {
  int i;
  cout << "Enter the value of n: ";
  cin >> n;
  cout << "Enter the elements: "<<endl;
  for(i = 0; i < n; i++)
    cin >> arr[i];
  selection_sort();
  cout << "Sorted array: "<<endl;
  for(i = 0; i < n; i++)
    cout << arr[i] << endl;
  return 0;
}

void selection_sort() {
  int i, j, min, temp;
  for(i = 0; i < n; i++) {
    min = i;
    for(j = i + 1; j < n; j++) {
      if(arr[j] < arr[min])
        min = j;
    }
    temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;
  }
}
