#include <iostream>
#include <string>
#include <cctype> // for isdigit
 
using namespace std;
 
int main() {
    int A, B;
    cin >> A >> B;
    string S;
    cin >> S;
 
    // Check length first
    if (S.length() != A + B + 1) {
        cout << "No" << endl;
        return 0;
    }
 
    // Check position A for '-'
    if (S[A] != '-') {
        cout << "No" << endl;
        return 0;
    }
 
    // Check all other positions for digits
    for (int i = 0; i < S.length(); i++) {
        if (i == A) continue; // skip the '-'
        if (!isdigit(S[i])) {
            cout << "No" << endl;
            return 0;
        }
    }
 
    cout << "Yes" << endl;
    return 0;
}
