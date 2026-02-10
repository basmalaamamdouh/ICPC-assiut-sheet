#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    long long num;
    cin >> num;
 
    if (num <= 1) {
        cout << "NO";
        return 0;
    }
 
    if (num == 2) {
        cout << "YES";
        return 0;
    }
 
    if (num % 2 == 0) {
        cout << "NO";
        return 0;
    }
 
    bool isPrime = true;
    for (long long i = 3; i * i <= num; i += 2) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    }
 
    if (isPrime)
        cout << "YES";
    else
        cout << "NO";
 
    return 0;
}
