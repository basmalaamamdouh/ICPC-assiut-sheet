#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    getline(cin, s);   // ✅ Read the whole line including spaces

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ',')
        {
            s[i] = ' ';   // replace comma with space
        }
        else if (isupper(s[i])) {
            s[i] = tolower(s[i]); // capital → small
        }
        else if (islower(s[i])) {
            s[i] = toupper(s[i]); // small → capital
        }
    }

    cout << s << endl;
}
