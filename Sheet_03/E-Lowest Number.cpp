#include <iostream>
#include <vector>
using namespace std;
 
int main() 
{
    long long size; 
    cin >> size;
    vector<long long> arr(size);
  
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        
        
    }
    int min=arr[0];
    int pos = 0;
    for (int i = 1; i < size; i++)
    {
        
        if (arr[i] < min)
        {
            min = arr[i];
            pos = i;
        }
 
    }
    cout << min<<" "<<pos+1;
   
   
    
}
