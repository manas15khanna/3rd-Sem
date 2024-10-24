#include<iostream>
#define size 50
using namespace std;
int main(){
int arr[size], n, i, j, temp;
cout << "Enter the number of elements: ";
cin >> n;
cout << "Enter the array: ";
for(i = 0; i < n; i++)
  cin >> arr[i];
for(i = 0; i < n - 1; i++){
  for(j = 0; j < n - i - 1; j++){
    if(arr[j] > arr[j + 1]){
      temp = arr[j];
      arr[j] = arr[j + 1];
      arr[j + 1] = temp;
    }
  }
}
cout << "The sorted list is: "<<endl;
for(i = 0; i < n; i++)
    cout << arr[i] << endl;
return 0;
}
