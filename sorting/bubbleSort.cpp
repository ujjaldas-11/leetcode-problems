#include <iostream>

using namespace std;        

void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n-i; j++) { // n-i - for ignore last value
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void printArray(int arr[], int n) {
    cout << "[ ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " " ;
    }
    cout << "]";
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    cout << endl;
    int arr[100];
    for(int i = 0; i < n; i++) {
        cout << "Enter element no " << i << ": ";
        cin >> arr[i];
    }
    cout << endl;
    bubbleSort(arr, n);
    printArray(arr, n);


    return 0;
}