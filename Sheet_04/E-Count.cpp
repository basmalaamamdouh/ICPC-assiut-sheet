#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    string S;
    cin >> S;
 
    int summation = 0;
 
    // Iterate through each character and sum up the digits
    for (char digit : S) {
        summation += digit - '0';
    }
 
    // Print the summation of the digits
    cout << summation;
 
    return 0;
}
