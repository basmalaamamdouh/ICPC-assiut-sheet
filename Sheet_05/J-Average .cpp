#include <iostream>
#include <iomanip>
using namespace std;

double calcAverage(double arr[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum / n;
}

int main() {
    int N;
    cin >> N;

    double A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    double avg = calcAverage(A, N);

    cout << fixed << setprecision(7) << avg << endl;
    return 0;
}
