#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int *a, int n){
    int i,j,temp, minIndex;

    for(i=0; i<n; i++) {
        minIndex = i;
        for(j=i+1; j<n; j++) {
            if(a[j] < a[minIndex]) {
                minIndex = j;
            }
        }
        swap(&a[i], &a[minIndex]);
    }
}

void printArray(int *a, int n) {
    int i;
    for(i = 0; i<n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {4,3,6,-8,1,0,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    selectionSort(arr, n);
    printArray(arr, n);


    return 0;
}