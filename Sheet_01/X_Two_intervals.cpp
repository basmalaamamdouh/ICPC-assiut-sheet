#include <iostream>
 
using namespace std;
 
int main() {
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
 
    int intersection_left = max(l1, l2);
    int intersection_right = min(r1, r2);
 
    if (intersection_left <= intersection_right) {
        cout << intersection_left << " " << intersection_right << endl;
    } else {
        cout << -1 << endl;
    }
 
    return 0;
}
