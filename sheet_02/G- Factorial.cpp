#include <iostream>
 
using namespace std;
 
// Function to calculate factorial
long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
 
int main() {
    int T;
    cin >> T;
 
    while (T--) {
        int N;
        cin >> N;
 
        // Calculate and print the factorial for each test case
        cout << factorial(N) << endl;
    }
 
    return 0;
}
