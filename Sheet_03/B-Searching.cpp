#include <iostream>
#include <vector>
using namespace std;
 
int main() 
{
    long long size ;
    
    int snum;
    cin >> size;
    vector<long long> arr(size);
  
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        
    }
    cin >> snum;
    int pos = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == snum) {
            pos = i;
            break;
        }
    }
    cout << pos;
    
}
