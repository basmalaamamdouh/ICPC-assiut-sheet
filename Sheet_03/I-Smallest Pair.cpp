#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
    int T;
    cin >> T;
 
    while (T--) {
        int N;
        cin >> N;
 
        vector<long long> arr(N);
 
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
 
        // Initialize the result to a large value
        long long result = LLONG_MAX;
 
        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                // Calculate Ai + Aj + j - i
                long long sum = arr[i] + arr[j] + j - i;
 
                // Update the result if the current sum is smaller
                result = min(result, sum);
            }
        }
 
        // Output the result for the current test case
        cout << result << endl;
    }
 
    return 0;
}
