#include <iostream>
using namespace std;
 
int main() {
    int N;
    cin >> N;
 
    // Print left-angled triangle
    for (int i = 1; i <= N; i++) {
        // Print '*' for each row
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
 
    return 0;
}
