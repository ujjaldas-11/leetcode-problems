#include <iostream>

using namespace std;


int binarySearch(int arr[], int n, int key) {
    int start = 0, end = n-1;
    int mid = start + (end - start)/2;

    while(start <= end) {
        if(arr[mid] == key) {
            return mid;
        }

        if(key > arr[mid]) {
            start = mid+1;
        }

        if(key < arr[mid] ) {
            end = mid-1;
        }

        mid = start + (end - start)/2;
    }

    return -1;
}

int main() {
    int arr[8] = {2,4,6,8,10,12,16,18};

    int key;

    cout << "Enter key: ";
    cin >> key;

    
    int index = binarySearch(arr, 8, key);

    cout << "index of "<< key <<" is: " << index << endl;
    
    return 0;
}