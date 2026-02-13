#include <iostream>
#include <vector>
using namespace std;

int main() {
    int ra, ca, rb, cb;

    // Read Matrix A
    cin >> ra >> ca;
    vector<int> matA(ra * ca);
    for (int i = 0; i < ra * ca; i++)
        cin >> matA[i];

    // Read Matrix B
    cin >> rb >> cb;
    vector<int> matB(rb * cb);
    for (int i = 0; i < rb * cb; i++)
        cin >> matB[i];

    // Multiply
    int rc = ra, cc = cb;
    vector<int> matC(rc * cc);

    for (int i = 0; i < rc; i++) {
        for (int j = 0; j < cc; j++) {
            int sum = 0;
            for (int k = 0; k < ca; k++) {
                sum += matA[i * ca + k] * matB[k * cb + j];
            }
            matC[i * cc + j] = sum;
        }
    }

    // Print Result
    for (int i = 0; i < rc; i++) {
        for (int j = 0; j < cc; j++) {
            cout << matC[i * cc + j];
            if (!(i == rc - 1 && j == cc - 1))
                cout << " ";
        }
        if (i != rc - 1)
            cout << "\n";
    }

    return 0;
}
