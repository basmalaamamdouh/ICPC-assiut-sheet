#include <iostream>
#include <vector>
#include<iomanip>
using namespace std;
 
int main()
{
 int password;
    while (cin >> password) {
        if (password == 1999) {
            cout << "Correct" << endl;
            break; // Terminate the program if the correct password is entered
        }
        else {
            cout << "Wrong" << endl;
        }
    }
 
}
 
 
