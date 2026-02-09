#include <iostream>
using namespace std;

void findMinMax(int arr[], int n, int &mn, int &mx) {
    mn = arr[0];
    mx = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < mn)
            mn = arr[i];
        if (arr[i] > mx)
            mx = arr[i];
    }
}

int main() {
    int N;
    cin >> N;

    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int minimum, maximum;
    findMinMax(A, N, minimum, maximum);

    cout << minimum << " " << maximum << endl;
    return 0;
}
