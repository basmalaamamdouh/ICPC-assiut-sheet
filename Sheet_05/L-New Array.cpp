#include <iostream>
using namespace std;

// Function to concatenate B followed by A into C
void createNewArray(int A[], int B[], int C[], int N) {
    // Copy B into C first
    for (int i = 0; i < N; i++) {
        C[i] = B[i];
    }
    // Copy A into C after B
    for (int i = 0; i < N; i++) {
        C[N + i] = A[i];
    }
}

int main() {
    int N;
    cin >> N;

    int A[N], B[N], C[2 * N];

    for (int i = 0; i < N; i++) cin >> A[i];
    for (int i = 0; i < N; i++) cin >> B[i];

    createNewArray(A, B, C, N);

    for (int i = 0; i < 2 * N; i++) {
        cout << C[i] << " ";
    }
    cout << endl;

    return 0;
}
