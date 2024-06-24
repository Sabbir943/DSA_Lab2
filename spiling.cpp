#include <iostream>
using namespace std;
bool SplittingArray(int A[], int length) {
    int left_sum = 0;
    int total_sum = 0;
    
    // Calculate the total sum of the array
    for (int i = 0; i < length; ++i) {
        total_sum += A[i];
    }
    
    // Iterate through the array to find the split point
    for (int i = 0; i < length - 1; ++i) {
        left_sum += A[i];
        if (left_sum == total_sum - left_sum) {
            return true;
        }
    }
    
    return false;
    
    
}

int main() {
    int A[] = {10, 3, 1, 3, 10};
    int length = sizeof(A) / sizeof(A[0]);
     // Output should be true
     bool result = SplittingArray(A, length);
    cout << boolalpha << result << endl;
    return 0;
}
