#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = 97; i <= 122; i++) {   
        char ch = (char)i;
        int cnt = count(s.begin(), s.end(), ch);

        if (cnt > 0) { 
            cout << ch << " : " << cnt << endl;
        }
    }
}
