#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>& arr, int left, int mid, int right) {
    
    // set size of two halves
    int n1 = mid - left +1;
    int n2 = right - mid;

    // crate temporary vector 
    vector<int> L(n1), R(n2);

    // copy the array in L & R
    for(int i=0; i<n1; i++) 
        L[i] = arr[left+i];

    for(int j=0; j<n2; j++)
        R[j] = arr[mid+1+j];

    //intialize indexes
    int i=0, j=0;

    //main index for result array
    int k = left;

    // merge & compairs elements
    // if L[i] less then R[j] then add in the array
    while(i < n1 && j < n2) {
        if(L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // add remaining elements

    while(i<n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while(j<n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& arr, int left, int right) {
    if(left >= right) 
        return;

    int mid = left + (right - left) / 2;

    // split the array into two halves recursivly
    mergeSort(arr, left, mid);
    mergeSort(arr, mid+1, right);

    // call merge
    merge(arr, left, mid, right);
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

    mergeSort(arr, 0, n-1);

    for(int i : arr) {
        cout << i << ", ";
    }

    return 0;
}