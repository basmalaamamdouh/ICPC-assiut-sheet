#include <iostream>
using namespace std;
 
int main() {
    long long N;
    cin >> N;
    if (N > 0 && (N & (N - 1)) == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
}
