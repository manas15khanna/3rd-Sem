#include <iostream>
using namespace std;
void quicksort(int [], int, int);
int main()
{
    int list[100];
    int value;
    cout << "Enter the number of elements to sort: ";
    cin >> value;

    cout << "\nEnter the elements to sort: \n";
    for (int i = 0; i < value; i++)
    {
        cout << "Enter element [" << i + 1 << "]: ";
        cin >> list[i];
    }
    quicksort(list, 0, value - 1);
    cout << "\nQuick Sort Result: \n";
    for (int i = 0; i < value; i++)
    {
        cout << list[i] << "  ";
    }
    cout << endl;
    return 0;
}
void quicksort(int list[], int low, int high)
{
    if (low < high)
    {
        int pivot = list[low];
        int i = low + 1;
        int j = high;
        while (i <= j)
        {
            while (i <= high && list[i] <= pivot) i++;
            while (list[j] > pivot) j--;
            if (i < j)
            {
                swap(list[i], list[j]);
            }
        }
        swap(list[low], list[j]);
        quicksort(list, low, j - 1);  // Sort the left part
        quicksort(list, j + 1, high); // Sort the right part
    }
}
