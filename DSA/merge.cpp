#include<iostream>
using namespace std;
void mergesort(int[], int, int);
void merge(int[], int, int, int);
void mergesort(int arr[25], int left, int right){
if(left < right){
  int mid = (left + right) / 2;
  mergesort(arr, left, mid);
  mergesort(arr, mid + 1, right);
  merge(arr, left, mid, right);
  }
}
void merge(int arr[25], int left, int mid, int right){
  int i, j, k, B[100];
  i = left;
  j = mid + 1;
  k = left;
  while(i <= mid && j <= right){
    if(arr[i] < arr[j]){
        B[k] = arr[i];
        i++;
    } else {
        B[k] = arr[j];
        j++;
    }
    k++;
  }
  while(i <= mid){
    B[k] = arr[i];
    i++;
    k++;
  }
  while(j <= right){
    B[k] = arr[j];
    j++;
    k++;
  }
  for(i = left; i <= right; i++)
    arr[i] = B[i];
  }
int main(){
  int n, arr[25], i;
  cout << "Enter the size of the array to be entered: ";
  cin >> n;
  cout << "Enter the array to be sorted: "<<endl;
  for(i = 0; i < n; i++)
      cin >> arr[i];
  cout << "The array entered is: "<<endl;
  for(i = 0; i < n; i++)
      cout << arr[i] << endl;
  mergesort(arr, 0, n - 1);
  cout << "\nThe sorted array is: "<<endl;
  for(i = 0; i < n; i++)
      cout << arr[i] << endl;
  return 0;
}
