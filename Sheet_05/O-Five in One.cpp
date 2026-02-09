#include <iostream>
#include <cmath>
using namespace std;

// 1. Maximum number
int getMax(int arr[], int n) {
    int mx = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > mx) mx = arr[i];
    }
    return mx;
}

// 2. Minimum number
int getMin(int arr[], int n) {
    int mn = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < mn) mn = arr[i];
    }
    return mn;
}

// 3. Count prime numbers
bool isPrime(int x) {
    if (x <= 1) return false;
    if (x == 2) return true;
    if (x % 2 == 0) return false;
    for (int i = 3; i*i <= x; i += 2) {
        if (x % i == 0) return false;
    }
    return true;
}

int countPrimes(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) count++;
    }
    return count;
}

// 4. Count palindrome numbers
bool isPalindrome(int x) {
    int original = x, reversed = 0;
    while (x > 0) {
        reversed = reversed * 10 + x % 10;
        x /= 10;
    }
    return original == reversed;
}

int countPalindromes(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (isPalindrome(arr[i])) count++;
    }
    return count;
}

// 5. Number with maximum divisors
int maxDivisorsNumber(int arr[], int n) {
    int maxDiv = 0, result = 0;

    for (int i = 0; i < n; i++) {
        int x = arr[i];
        int divisors = 0;
        for (int j = 1; j*j <= x; j++) {
            if (x % j == 0) {
                divisors++;
                if (j != x/j) divisors++;
            }
        }
        // Update if more divisors or same divisors but bigger number
        if (divisors > maxDiv || (divisors == maxDiv && x > result)) {
            maxDiv = divisors;
            result = x;
        }
    }
    return result;
}

int main() {
    int N;
    cin >> N;

    int A[N];
    for (int i = 0; i < N; i++) cin >> A[i];

    cout << "The maximum number : " << getMax(A, N) << endl;
    cout << "The minimum number : " << getMin(A, N) << endl;
    cout << "The number of prime numbers : " << countPrimes(A, N) << endl;
    cout << "The number of palindrome numbers : " << countPalindromes(A, N) << endl;
    cout << "The number that has the maximum number of divisors : " << maxDivisorsNumber(A, N) << endl;

    return 0;
}
