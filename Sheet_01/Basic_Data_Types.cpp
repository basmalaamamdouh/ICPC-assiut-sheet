#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
  int A, B;
    cin >> A >> B;
    bool istrue = false;
    long long size;
    size = A + B + 1;
    vector<char> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        
    }
    for (int i = 0; i < size; i++) {
        if ((arr[i] >= '0' && arr[i] <= '9') && (arr[A] == '-')) {
            istrue = true;
            break;
        }

 
    int a; long long b;  char c; float d; double e;
    cin >> a >> b >> c >> d >> e;
    cout << a << endl << b << endl << c << endl << d << endl << e << endl;
 
}
 
 
