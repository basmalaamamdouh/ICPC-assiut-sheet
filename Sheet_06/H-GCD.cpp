#include <iostream>
#include <numeric>  // for std::gcd
using namespace std;

int main() {
    unsigned long long a, b;
    cin >> a >> b;

    unsigned long long result = gcd(a, b);

    cout << result << " " << (a * b) / result;

    return 0;
}
