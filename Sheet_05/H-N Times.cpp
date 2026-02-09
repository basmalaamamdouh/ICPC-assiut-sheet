#include <iostream>
using namespace std;

void printChar(int n, char c) {
    for (int i = 0; i < n; i++) {
        cout << c;
        if (i != n - 1) cout << " "; // avoid trailing space
    }
    cout << "\n";
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        char C;
        cin >> N >> C;
        printChar(N, C);
    }

    return 0;
}
