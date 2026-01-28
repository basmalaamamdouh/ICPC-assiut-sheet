#include <iostream>
using namespace std;

int main() {
    int n, input;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> input;

        if (input == 0) {
            cout << "0 ";
        } else {
            while (input > 0) {
                cout << input % 10 << " ";
                input /= 10;
            }
        }

        cout << endl;
    }

    return 0;
}
