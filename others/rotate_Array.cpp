#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

// void rotate(vector<int>& arr, int k) {
//     vector<int> temp(arr.size());
//     for(int i = 0; i< arr.size(); i++) {
//         temp[(i+k)%arr.size()] = arr[i];
//     }

//     arr = temp;
// }

void rotateArray(vector<int>& arr, int k){
    if(arr.size() ==0 ) return;
    if(k==0) return;
    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin()+k);
    reverse(arr.begin()+k, arr.end());

}

void print(vector<int>& arr, int n) {
    for(int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int k;
    cout<< "Enter a key: ";
    cin >> k;
    vector<int> arr = {1,2,3,4,5,6,7};

    cout << " array: " << endl;
    print(arr, arr.size());
    cout << endl;
    cout << "rotate array:  " << endl;
    rotateArray(arr, k);
    print(arr,arr.size());
    cout << endl;
    return 0;
}