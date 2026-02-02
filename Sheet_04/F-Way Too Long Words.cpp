#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
   
    while (n--) {
        string s;
        cin >> s;
        int sum = 0;
        int i = s.length();
        if (s.length() <= 10)
        {
            cout << s << endl;

        }
        else
   
          cout << s[0] << s.length() - 2<<s[i-1]<<endl;

    }
}


