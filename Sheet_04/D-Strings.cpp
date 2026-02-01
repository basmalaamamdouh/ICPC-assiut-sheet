#include <iostream>
using namespace std;
 
int main() {
    string A, B;
    cin >> A >> B;
    
    // 1) Print sizes
    cout << A.size() << " " << B.size() << "\n";
    
    // 2) Print concatenation
    cout << A + B << "\n";
    
    // 3) Swap first characters
    string A2 = A;
    string B2 = B;
    swap(A2[0], B2[0]);
    cout << A2 << " " << B2 << "\n";
    
    return 0;
}
