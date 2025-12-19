#include <iostream>
using namespace std;
 
int main() {
    long long N, M;
    cin >> N >> M;
 
    // Extracting the last digit of each number
    int lastDigitN = N % 10;
    int lastDigitM = M % 10;
 
    // Calculating and printing the summation of last digits
    cout << (lastDigitN + lastDigitM) << endl;
 
    return 0;
}
