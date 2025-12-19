#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    double A, B;
    cin >> A >> B;
 
    double result = A / B;
 
    cout << "floor " << (int)A << " / " << (int)B << " = " << (int)floor(result) << "\n";
    cout << "ceil "  << (int)A << " / " << (int)B << " = " << (int)ceil(result) << "\n";
    cout << "round " << (int)A << " / " << (int)B << " = " << (int)round(result) << "\n";
 
    return 0;
}
