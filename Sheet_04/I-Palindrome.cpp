#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    string s2 = "";
    for (int i = s.length() - 1; i >= 0; i--) {
        s2 += s[i];
    }

    if (s == s2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
