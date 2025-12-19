#include <iostream>
using namespace std;
 
int main() {
    char X;
    cin >> X;
 
    // Check if the letter is lowercase
    if (islower(X)) {
        // Convert from lowercase to uppercase
        X = toupper(X);
    } else {
        // Convert from uppercase to lowercase
        X = tolower(X);
    }
 
    cout << X << endl;
 
    return 0;
}
