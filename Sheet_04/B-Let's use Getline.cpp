#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    string S;
 
    // Read the input string using getline
    getline(cin, S, '\\');
 
    // Print the string without the backslash
    cout << S;
 
    return 0;
}
