#include <iostream>
#include <string>
using namespace std;

// Function 1: check if binary representation is palindrome
bool isBinaryPalindrome(int n) {
    string binary = "";

    // Convert to binary
    while (n > 0) {
        binary = char('0' + (n % 2)) + binary;
        n /= 2;
    }

    // Check palindrome
    int l = 0, r = binary.length() - 1;
    while (l < r) {
        if (binary[l] != binary[r])
            return false;
        l++;
        r--;
    }
    return true;
}

// Function 2: check if number is wonderful
bool isWonderful(int n) {
    return (n % 2 == 1) && isBinaryPalindrome(n);
}

int main() {
    int N;
    cin >> N;

    if (isWonderful(N))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
