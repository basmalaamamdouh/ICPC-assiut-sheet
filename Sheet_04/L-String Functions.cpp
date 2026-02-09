#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int size, num_queries, scope1, scope2, start, end, pos;
    string S;
    string query;

    cin >> size >> num_queries;
    cin >> S;

    while (num_queries--) {
        cin >> query;

        if (query == "pop_back") {
            S.pop_back();
        }
        else if (query == "front") {
            cout << S[0] << "\n";
        }
        else if (query == "back") {
            cout << S[S.size() - 1] << "\n";
        }
        else if (query == "sort") {
            cin >> scope1 >> scope2;
            start = min(scope1, scope2);
            end = max(scope1, scope2);
            sort(S.begin() + (start - 1), S.begin() + end);
        }
        else if (query == "reverse") {
            cin >> scope1 >> scope2;
            start = min(scope1, scope2);
            end = max(scope1, scope2);
            reverse(S.begin() + (start - 1), S.begin() + end);
        }
        else if (query == "print") {
            cin >> pos;
            cout << S[pos - 1] << "\n";
        }
        else if (query == "substr") {
            cin >> scope1 >> scope2;
            start = min(scope1, scope2);
            end = max(scope1, scope2);
            cout << S.substr(start - 1, end - start + 1) << "\n";
        }
        else { // push_back
            char c;
            cin >> c;
            S.push_back(c);
        }
    }

    return 0;
}
