#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string s, t = "";

    cin >> n >> s;

    for (int i = 0; i < s.size(); i++) {
        if (t.empty() || s[i] != t.back()) {
            t.push_back(s[i]);
        }
    }

    cout << t.size() << "\n";
    return 0;
}
