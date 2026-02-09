#include <iostream>
using namespace std;

// Function to shift all zeros to the right
void shiftZeros(int arr[], int n) {
    int pos = 0; // position to place the next non-zero

    // Move all non-zero elements to the front
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[pos++] = arr[i];
        }
    }

    // Fill the remaining positions with zeros
    for (int i = pos; i < n; i++) {
        arr[i] = 0;
    }
}

int main() {
    int N;
    cin >> N;

    int A[N];
    for (int i = 0; i < N; i++) cin >> A[i];

    shiftZeros(A, N);

    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
