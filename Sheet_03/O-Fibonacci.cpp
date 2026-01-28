#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int N;
    cin >> N;
 
    vector<long long> fibArray(N + 2); // safe sizing, 1-based
 
    fibArray[1] = 0;
    fibArray[2] = 1;
 
    for (int i = 3; i <= N; i++) {
        fibArray[i] = fibArray[i - 1] + fibArray[i - 2];
    }
 
    cout << fibArray[N] << endl;
 
    return 0;
}
