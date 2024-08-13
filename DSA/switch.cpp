#include <iostream>
using namespace std;
int main() {
    int arr[10];
    int choice, x, pos, i;
    cout << "Enter the array elements:\n";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    while (true) {
        cout << "Choose the Operation:\n";
        cout << "Options:\n 1. Traversal\n 2. Insertion\n 3. Deletion\n 4. Break\n";
        cout << "Choose Option: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Traversal \n";
                cout << "Enter index position: ";
                cin >> x;
                if (x >= 0 && x < 10) {
                    cout << "Element at position " << x << " is: " << arr[x] << endl;
                } else {
                    cout << "Invalid index!\n";
                }
                break;
            case 2:
                cout << "Insertion\n";
                cout << "Enter the element to insert: ";
                cin >> x;
                for (int i = 9; i > 0; i--) {
                    arr[i] = arr[i - 1];
                }
                arr[0] = x;
                cout << "Element inserted at index 0.\n";
                cout << "Array after insertion:\n";
                for (int i = 0; i < 10; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
                break;
            case 3:
                cout << "Deletion\n";
                cout << "Enter the index to delete: ";
                cin >> pos;
                if (pos >= 0 && pos < 10) {
                    for (int i = pos; i < 9; i++) {
                        arr[i] = arr[i + 1];
                    }
                    cout << "Element at index " << pos << " deleted.\n";
                    cout << "New Array:\n";
                    for (int i = 0; i < 9; i++) {
                        cout << arr[i] << " ";
                    }
                    cout << endl;
                } else {
                    cout << "Invalid index!\n";
                }
                break;
            case 4:
                cout << "Breaking\n";
                return 0;
            default:
                cout << "Invalid choice!\n";
                break;
        }
        if (choice == 4) {
            break; // Exit the while loop
        }
    }
    return 0;
}
