#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        bool isGood = false;

        for (int i = 0; i <= s.length() - 3; i++) { // <= to avoid out-of-range
            string sub = s.substr(i, 3); // take 3 characters
            if (sub == "010" || sub == "101") {
                isGood = true;
                break;
            }
        }

        if (isGood) cout << "Good" << endl;
        else cout << "Bad" << endl;
    }
}
