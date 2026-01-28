#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
   
  
        int N;
        cin >> N;
        int i = 0;
        vector<long long> arr(N);
 
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        while (true) {
            bool allEven = true;
        for (int i = 0; i < N; i++)
        {
            if (arr[i] % 2 != 0)
            {
                allEven = false;
                break;
            }
            
        }
        if (allEven) {
            
            for (int i = 0; i < N; i++) {
                arr[i] /= 2;
            }
            i++;
        }
        else {
            break; 
        }
        }
        cout << i;
        return 0;
       
}
 
