#include <iostream>
using namespace std;

long long power(int x, int p) {
    long long result = 1;
    for (int i = 0; i < p; i++) {
        result *= x;
    }
    return result;
}

long long solveEquation(int X, int N) {
    long long S = 0;

    // Add (X^0 - 1)
    S += power(X, 0) - 1; // = 1 - 1 = 0

    // Add X^2 + X^4 + ... + X^N (only even powers)
    for (int i = 2; i <= N; i += 2) {
        S += power(X, i);
    }

    return S;
}

int main() {
    int X, N;
    cin >> X >> N;

    cout << solveEquation(X, N) << endl;
    return 0;
}
