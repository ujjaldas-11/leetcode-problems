#include <iostream>

using namespace std;

void removezero(int a[], int n) {
    int i = 0;

    for(int j = 0; j<n; j++) {
        if(a[j] != 0) {
            swap(a[j], a[i]);
            i++;
        }
    }
}

void print(int a[], int n) {
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    
}

int main() {
    int a[6] = {1,0,4,5,0,3};
    removezero(a,6);
    print(a,6);

    return 0;
}