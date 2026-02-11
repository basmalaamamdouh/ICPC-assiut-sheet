#include <iostream>
using namespace std;

int main() {
    unsigned long long a, b, q;
    cin >> a >> b >> q;

    int choice = q % 3;
    if (choice == 1) {
        cout << a;
        return 0;
    }
    if (choice == 2) {
        cout << b;
        return 0;
    }

    cout << (a ^ b);
    return 0;
}
