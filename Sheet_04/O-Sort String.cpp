#include <iostream>
using namespace std;

int main() {
    int s[26] = {0};
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        char c;
        cin >> c;          // no need for " %c" in C++
        s[c - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        while (s[i]--) {
            cout << char(i + 'a');
        }
    }

    return 0;
}
