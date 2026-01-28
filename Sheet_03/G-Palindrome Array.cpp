#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    long long size;
    cin >> size;
    bool symm = true;
    vector<long long> arr(size);
 
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
 
    for (int i = 0; i < size / 2; i++)
    {
        if (arr[i] != arr[size - i - 1])
        {
            symm = false;
            break;
        }
       
    }
    if (symm == true)
    {
        cout << "YES";
        
    }
    if (symm == false) {
        cout << "NO";
    }
}
