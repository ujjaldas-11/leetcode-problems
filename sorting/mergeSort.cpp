#include <iostream>


using namespace std;

void merge(int *arr, int s, int e){
    int mid = s + (e-s)/2;
    int len1 = mid - s+1;
    int len2 = e-mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copy data to temp arrays
    int mainIndex = s;
    for(int i = 0; i<len1; i++) {
        first[i] = arr[mainIndex++];
    }

    mainIndex = mid+1;
    for(int i = 0; i < len2; i++){
        second[i] = arr[mainIndex++];
    }

    // merge two sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainIndex = s;

    while(index1 < len1 && index2 < len2) {
        if(first[index1] < second[index2]) {
            arr[mainIndex++] = first[index1++];
        } else {
            arr[mainIndex++] = second[index2++];
        }
    }

    // ceheck for first array

    while(index1 < len1) {
        arr[mainIndex++] = first[index1++];
    } 

    // check for second array

    while(index2 < len2) {
        arr[mainIndex++] = second[index2++];
    }

    delete []first;
    delete []second;
}

void mergeSort(int *arr, int s, int e) {
    //base case
    if(s >= e) {
        return;
    }

    int mid = s + (e-s)/2;

    // sort left half
    mergeSort(arr, s, mid); 
    // sort right half
    mergeSort(arr, mid+1, e);

    // merge the two halves
    merge(arr, s, e);
}



int main() {
    int arr[] = {12, 11, 13, 5, 6, 7,0,4,1,5,89,87,5,6,3,2,4,1,0,84,26,45,62};
    int n = (sizeof(arr) / sizeof(arr[0]));
    

    mergeSort(arr, 0, n-1);

    for(int i = 0; i < n; i++) {
        cout << arr[i]<< " ";
    }
    return 0;
}