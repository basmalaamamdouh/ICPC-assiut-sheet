#include <iostream>
using namespace std;
 
int main() {
    int x;
    cin >> x;
 
    // Extract the first digit
    int firstDigit = x / 1000;
 
    // Check if the first digit is even
    if (firstDigit % 2 == 0) {
        cout << "EVEN" << endl;
    } else {
        cout << "ODD" << endl;
    }
 
    return 0;
}
