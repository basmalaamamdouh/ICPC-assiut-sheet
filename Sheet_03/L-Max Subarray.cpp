#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
 
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
 
        for (int i = 0; i < n; ++i) {
            for (int j = i; j < n; ++j) {
                int max_element = arr[i];
                for (int k = i + 1; k <= j; ++k) {
                    max_element = max(max_element, arr[k]);
                }
                cout << max_element << " ";
            }
        }
        cout << endl;
    }
 
    return 0;
}
