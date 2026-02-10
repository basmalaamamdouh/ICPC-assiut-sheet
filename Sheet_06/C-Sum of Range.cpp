#include <iostream>
using namespace std;
 
// Sum of numbers from 1 to n
long long sumUpTo(long long n) {
    return n * (n + 1) / 2;
}
 
// Sum of even numbers from 1 to n
long long evenSumUpTo(long long n) {
    long long k = n / 2;        // number of even terms
    return k * (k + 1);
}
 
// Sum of odd numbers from 1 to n
long long oddSumUpTo(long long n) {
    long long k = (n + 1) / 2;  // number of odd terms
    return k * k;
}
 
int main() {
    long long A, B;
    cin >> A >> B;
 
    if (A > B) swap(A, B);  // ensure A <= B
 
    long long total = sumUpTo(B) - sumUpTo(A - 1);
    long long evenSum = evenSumUpTo(B) - evenSumUpTo(A - 1);
    long long oddSum = oddSumUpTo(B) - oddSumUpTo(A - 1);
 
    cout << total << endl;
    cout << evenSum << endl;
    cout << oddSum << endl;
 
    return 0;
}
