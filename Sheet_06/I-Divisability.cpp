#include <iostream>
using namespace std;
 
unsigned long long sum(unsigned long long n) {
    // This function returns sum from 1 to n: 1+2+3+...+n
    return n * (n + 1) / 2;
}
 
int main() {
    unsigned long long a, b, x;
    cin >> a >> b >> x;
 
    unsigned long long minVal, maxVal;
 
    if (a > b) {
        maxVal = a;
        minVal = b;
    } else {
        maxVal = b;
        minVal = a;
    }
 
    unsigned long long result =
        sum(maxVal / x) * x - sum((minVal - 1) / x) * x;
 
    cout << result << endl;
 
    return 0;
}
