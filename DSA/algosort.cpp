#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int x;
    cout << "Enter the number of elements in the array: " << endl;
    cin >> x;
    // Using a vector to dynamically handle the array size
    vector<int> arr(x);
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < x; i++) {
        cin >> arr[i];
    }
    // Sorting the array
    sort(arr.begin(), arr.end());
    // Displaying the sorted array
    cout << "Sorted array: " << endl;
    for (int i = 0; i < x; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
