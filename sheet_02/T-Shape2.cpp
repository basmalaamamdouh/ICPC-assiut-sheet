#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        // Print spaces
        for (int s = 0; s < N - i; s++) {
            cout << " ";
        }

        // Print stars
        for (int star = 0; star < 2 * i - 1; star++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
