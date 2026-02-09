#include <iostream>
using namespace std;

void swapRowsAndColumns(int A[][500], int N, int X, int Y) {
    // convert to 0-based indices
    X--; 
    Y--;

    // swap row X with row Y
    for (int j = 0; j < N; j++) {
        swap(A[X][j], A[Y][j]);
    }

    // swap column X with column Y
    for (int i = 0; i < N; i++) {
        swap(A[i][X], A[i][Y]);
    }
}

int main() {
    int N, X, Y;
    cin >> N >> X >> Y;

    int A[500][500];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }

    swapRowsAndColumns(A, N, X, Y);

    // print the matrix
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
