#include <iostream>
using namespace std;
 
int main() {
    long long N;
    cin >> N;
 
    // Calculating the summation using the formula (N * (N + 1)) / 2
    long long summation = (N * (N + 1)) / 2;
 
    // Printing the result
    cout << summation << endl;
 
    return 0;
}
