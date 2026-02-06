#include <iostream>

using namespace std;

void swapAlternate(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if ((i + 1) < n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {2, 1, 4, 3, 6, 5, 8, 7};
    int size = sizeof(arr) / sizeof(int);
    cout << "Before swapping: " << endl;
    cout << "[";
    printArray(arr, size);
    cout << "]";
    cout << endl;
    swapAlternate(arr, size);
    cout << "After swapping: " << endl;
    cout << "[";
    printArray(arr, size);
    cout << "]";
    return 0;
}