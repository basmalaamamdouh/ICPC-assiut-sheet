#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
    double N;
    cin >> N;
 
    if (floor(N) == N) {
        // N is an integer
        cout << "int " << static_cast<int>(N) << endl;
    } else {
        // N is a float
        cout << "float " << static_cast<int>(N) << " " << N - static_cast<int>(N) << endl;
    }
 
    return 0;
}
