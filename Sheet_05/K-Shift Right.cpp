#include <iostream>
using namespace std;

// Function to shift the array right X times
void shiftRight(int arr[], int n, int x) {
    x = x % n; // in case X > N
    if (x == 0) return;

    int temp[n];

    // Place last x elements at the beginning
    for (int i = 0; i < x; i++) {
        temp[i] = arr[n - x + i];
    }

    // Shift the remaining elements
    for (int i = x; i < n; i++) {
        temp[i] = arr[i - x];
    }

    // Copy back to original array
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int N, X;
    cin >> N >> X;

    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    shiftRight(A, N, X);

    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
