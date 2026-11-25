#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int>& arr, int s, int e) {
    int pivot  = arr[e];

    int count = 0;

    for(int i=s; i<e; i++) {
        if(arr[i] <= pivot) {
            count++;
        }
    }

    int pivotIndex = s+count;
    swap(arr[pivotIndex], arr[e]);

    int i=s, j=e;

    while(i < pivotIndex && j > pivotIndex ) {
        while(arr[i] <= pivot) {
            i++;
        }

        while(arr[j] > pivot) {
            j--;
        }

        if(i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void quickSort(vector<int>& arr, int s, int e) {
    if(s >= e) 
        return;

    // int pi = partition(arr, s, e);
    int pi = partition(arr, s, e);

    quickSort(arr, s, pi-1);
    quickSort(arr, pi+1, e);
}


int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> arr(n);
    for (int i=0; i < n; i++ ) {
        cout << "Enter value" << i+1 << ": ";
        cin >> arr[i];
    }

    quickSort(arr, 0, n-1);

    for(int i=0; i<n; i++) {
        cout << arr[i] << ", ";
    }

    return 0;
}