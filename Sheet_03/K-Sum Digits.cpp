#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
   long long size; 
    cin >> size;
    long long sum = 0;
    vector<char> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        sum +=( arr[i]-'0');
    }
    cout << sum;
}
 
 
