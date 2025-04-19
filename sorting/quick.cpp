#include <iostream>
#include <vector>
using namespace std;

// Function to partition the vector and return the pivot index
int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[high]; // Choosing the last element as pivot
    int i = low - 1;       // Index of smaller element

    for (int j = low; j < high; ++j)
    {
        if (arr[j] < pivot)
        {
            ++i;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}

// Quick Sort function
void quickSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int pivotIndex = partition(arr, low, high);
        quickSort(arr, low, pivotIndex - 1);  // Left 
        quickSort(arr, pivotIndex + 1, high); // Right 
    }
}

int main()
{
    vector<int> arr = {34, 7, 23, 32, 5, 62};

    cout << "Original array: ";
    for (int num : arr)
        cout << num << " ";
    cout << endl;

    quickSort(arr, 0, arr.size() - 1);

    cout << "Sorted array:   ";
    for (int num : arr)
        cout << num << " ";
    cout << endl;

    return 0;
}
