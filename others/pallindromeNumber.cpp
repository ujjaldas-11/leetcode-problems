#include <iostream>


using namespace std;

bool palindrome(int x) {
    if(x < 0) return false;

    int original = x;
    long long rev = 0; 
    int rem;

    while(x != 0) {
        rem = x % 10;
        rev = (rev*10) + rem;
        x /= 10;
    }
    return original == rev;
}

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;

    if(palindrome(x)) {
        cout << "isPalindrome" << endl;
    } else{
        cout << " not palindrome" << endl;
    }
    // int result = palindrome(x);
    // cout << result << endl;
    return 0;
}
