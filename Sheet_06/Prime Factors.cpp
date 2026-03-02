#include <iostream>
using namespace std;

void printPrimeFactors(unsigned long long n) {
    int flag = 0;

    for (unsigned long long i = 2; i <= n / 2; i++) {
        int count = 0;

        while (n % i == 0) {
            count++;
            n /= i;
        }

        if (count > 0 && flag > 0)
            cout << "*";

        if (count > 0) {
            cout << "(" << i << "^" << count << ")";
            flag = 1;
        }

        if (n == 1)
            break;
    }

    // Handle the case where one prime number is left
    if (n > 1 && flag)
        cout << "*";

    if (n > 1)
        cout << "(" << n << "^1)";
}

int main() {
    unsigned long long N;
    cin >> N;

    printPrimeFactors(N);

    return 0;
}
