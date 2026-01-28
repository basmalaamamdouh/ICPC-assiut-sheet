#include <iostream>
#include <vector>
using namespace std;
 
int main() 
{
    long long size ;
    long long sum = 0;
    cin >> size;
    vector<long long> arr(size);
  
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    if (sum < 0)
    {
        sum *= -1;
    }
    cout << sum;
}
