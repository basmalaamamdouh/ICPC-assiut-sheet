#include <iostream>
 
int count_xyz_combinations(int K, int S) {
    int count = 0;
 
    for (int X = 0; X <= K; ++X) {
        for (int Y = 0; Y <= K; ++Y) {
            int Z = S - X - Y;
 
            // Check if X, Y, and Z are within the valid range
            if (Z >= 0 && Z <= K) {
                count++;
            }
        }
    }
 
    return count;
}
 
int main() {
    // Input
    int K, S;
    std::cin >> K >> S;
 
    // Output
    int result = count_xyz_combinations(K, S);
    std::cout << result << std::endl;
 
    return 0;
}
