#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
   
 
  
        int N;
        cin >> N;
 
        vector<long long> arr(N);
 
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        int min = arr[0];
        int mini=0;
       
       
        for (int i = 1; i < N; i++)
        {
            if (arr[i] < min)
            {
                min = arr[i];
                mini = i;
            }
             
        }
        int max = arr[0];
        int maxi = 0;
        for (int i = 1; i < N; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
                maxi = i;
            }
        }
        
        swap(arr[mini], arr[maxi]);
 
        for (int i = 0; i < N; i++) {
            cout<< arr[i]<<" ";
        }
   
}
 
