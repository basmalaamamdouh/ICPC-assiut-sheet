#include <iostream>
#include <cmath>

using namespace std;

int main() {
    unsigned long long n;
    cin >> n;

    unsigned long long sum = 0;
    unsigned long long root = sqrt(n);

    for (unsigned long long i = 1; i <= root; i++) {
        if (n % i == 0) {
            sum += i;

            // Avoid adding the square root twice if n is a perfect square
            if (i != n / i) {
                sum += n / i;
            }
        }
    }

    cout << sum;

    return 0;
}
