#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    int A, B, C;
    cin >> A >> B >> C;
 
    int arr[3] = {A, B, C};
 
    // Sort for ascending order
    sort(arr, arr + 3);
 
    // Print sorted
    for (int i = 0; i < 3; i++)
        cout << arr[i] << "\n";
 
    cout << "\n"; // blank line
 
    // Print original order
    cout << A << "\n" << B << "\n" << C << "\n";
 
    return 0;
}
