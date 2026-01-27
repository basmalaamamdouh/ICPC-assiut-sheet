#include <iostream>
 
using namespace std;
 
int main() {
    int N;
    cin >> N;
 
    // Reverse the number
    int reversedN = 0;
    int tempN = N;
 
    while (tempN > 0) {
        int digit = tempN % 10;
        reversedN = reversedN * 10 + digit;
        tempN /= 10;
    }
 
    // Print the reversed number
    cout << reversedN << endl;
 
    // Check if N is a palindrome
    if (N == reversedN) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
 
    return 0;
}
