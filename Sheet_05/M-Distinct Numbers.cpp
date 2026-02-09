#include <iostream>
using namespace std;

// Function to count distinct numbers in array
int countDistinct(int arr[], int n) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        bool isUnique = true;
        // Check if arr[i] appeared before
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) count++;
    }

    return count;
}

int main() {
    int N;
    cin >> N;

    int A[N];
    for (int i = 0; i < N; i++) cin >> A[i];

    cout << countDistinct(A, N) << endl;

    return 0;
}
